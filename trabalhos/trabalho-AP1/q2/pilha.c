#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define MAX 50

struct pilha {
    int n;
    int v[MAX];
};

Pilha* pilha_cria(void) {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    p->n = 0;
    return p;
}

int pilha_vazia(Pilha *p) {
    return (p->n == 0);
}

void pilha_push(Pilha *p, int info) {
    if (p->n == MAX) {
        printf("Capacidade da pilha estourou!\n");
        exit(1);
    }
    p->v[p->n] = info;
    p->n = p->n + 1;
}

int pilha_pop(Pilha *p) {
    int a;
    if (pilha_vazia(p)) {
        printf("Pilha vazia!!!\n");
        exit(1);
    }
    a = p->v[p->n - 1];
    p->n--;
    return a;
}

void pilha_imprime(Pilha *p) {
    int i;
    for (i = p->n - 1; i >= 0; i--) {
        printf("info: %d\n", p->v[i]);
    }
}

void pilha_libera(Pilha *p) {
    free(p);
}

int topo(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("Pilha vazia!\n");
        exit(1);
    }
    return p->v[p->n - 1];
}

int impares(Pilha* p) {
    int i, qtd = 0;
    for (i = 0; i < p->n; i++) {
        if (p->v[i] % 2 != 0) {
            qtd++;
        }
    }
    return qtd;
}

Pilha* empilha_pares(Pilha* p1, Pilha* p2) {
    int i, j, temp;
    int pares_v[MAX];
    int n_pares = 0;

    for (i = 0; i < p1->n; i++) {
        if (p1->v[i] % 2 == 0) {
            pares_v[n_pares] = p1->v[i];
            n_pares++;
        }
    }

    for (i = 0; i < n_pares - 1; i++) {
        for (j = i + 1; j < n_pares; j++) {
            if (pares_v[i] > pares_v[j]) {
                temp = pares_v[i];
                pares_v[i] = pares_v[j];
                pares_v[j] = temp;
            }
        }
    }

    for (i = 0; i < n_pares; i++) {
        pilha_push(p2, pares_v[i]);
    }

    return p2;
}
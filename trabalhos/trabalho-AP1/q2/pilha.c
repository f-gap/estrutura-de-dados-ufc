#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define MAX 3

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
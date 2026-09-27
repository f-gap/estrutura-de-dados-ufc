#include <stdio.h>
#include <stdlib.h>
#include "pilha_vetor.h"

#define MAX 3

struct pilha_vetor {
    int n;
    int v[MAX];
};

PilhaVetor* pilha_vetor_cria(void) {
    PilhaVetor *p = (PilhaVetor *) malloc(sizeof(PilhaVetor));
    if (p == NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    p->n = 0;
    return p;
}

int pilha_vetor_vazia(PilhaVetor *p) {
    return (p->n == 0);
}

void pilha_vetor_push(PilhaVetor *p, int info) {
    if (p->n == MAX) {
        printf("Capacidade da pilha estourou!\n");
        exit(1);
    }
    p->v[p->n] = info;
    p->n = p->n + 1;
}

int pilha_vetor_pop(PilhaVetor *p) {
    int a;
    if (pilha_vetor_vazia(p)) { // Refatorado: chamada corrigida para pilha_vetor_vazia
        printf("Pilha vazia!!!\n");
        exit(1);
    }
    a = p->v[p->n - 1];
    p->n--;
    return a;
}

void pilha_vetor_imprime(PilhaVetor *p) {
    int i;
    for (i = p->n - 1; i >= 0; i--) {
        printf("info: %d\n", p->v[i]);
    }
}

void pilha_vetor_libera(PilhaVetor *p) {
    free(p);
}
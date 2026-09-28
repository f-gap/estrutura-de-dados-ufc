#include <stdio.h>
#include <stdlib.h>
#include "fila_vetor.h"

#define N 3
typedef struct fila_vetor {
    int n;
    int ini;
    int v[N]; 
};

FilaVetor* fila_vetor_cria(void) {
    FilaVetor *f = (FilaVetor *)malloc(sizeof(FilaVetor));
    if(f==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    f->n=0;
    f->ini=0;
    return f;
}

void fila_vetor_insere(FilaVetor *f, int info) {
    int fim;
    if(f->n==N) {
        printf("Capacidade da fila estourou!!!\n");
        exit(1);
    }
    fim = (f->ini + f->n)%N;
    f->v[fim] = info;
    f->n++;
}

int fila_vetor_vazia(FilaVetor *f) {
    return (f->n==0);
}

int fila_vetor_remove(FilaVetor *f) {
    int a;
    if(fila_vetor_vazia(f)) {
        printf("Fila Vazia!!!\n");
        exit(1);
    }
    a = f->v[f->ini];
    f->ini = (f->ini+1)%N;
    f->n--;
    return a;
}

void fila_vetor_imprime(FilaVetor *f) {
    int i,k;
    for (i=0; i < f->n; i++)
    {
        k = (f->ini + i)%N;
        printf("%d\n",f->v[k]);
    }   
}

void fila_vetor_libera(FilaVetor *f) {
    free(f);
}
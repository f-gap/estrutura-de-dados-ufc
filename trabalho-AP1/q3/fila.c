#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct lista Lista;

struct lista{
    int info;
    Lista *prox;
};

struct fila{
    Lista *ini;
    Lista *fim;
};

Fila* fila_cria(void) {
    Fila *f = (Fila*)malloc(sizeof(Fila));
    if(f==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

int fila_vazia(Fila *f){
    return f->ini==NULL;
}


void fila_insere(Fila *f, int info) {
    Lista *l = (Lista*)malloc(sizeof(Lista));
    if(l==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    l->info = info;
    l->prox = NULL;
    if(!fila_vazia(f)) {
        f->fim->prox = l;
    }
    else {
        f->ini = l;
    }
    f->fim = l;
}

int fila_remove(Fila *f) {
    Lista *l;
    int a;
    if(fila_vazia(f)) {
        printf("Fila vazia!!!\n");
        exit(1);
    }
    a = f->ini->info;
    l = f->ini;
    f->ini = f->ini->prox;
    free(l);
    if(fila_vazia(f)) {
        f->fim == NULL;
    }
    return a;
}

void fila_imprime(Fila *f) {
    Lista *laux = f->ini;
    while(laux!=NULL) {
        printf("info: %d", laux->info);
        laux = laux->prox;
    }
}

void fila_libera(Fila *f) {
    Lista *l = f->ini;
    Lista *laux;
    while(l!=NULL) {
        laux = l->prox;
        free(l);
        l = laux;
    }
    free(f);
}

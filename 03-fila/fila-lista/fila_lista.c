#include <stdio.h>
#include <stdlib.h>
#include "fila_lista.h"

typedef struct lista Lista;

struct lista{
    int info;
    Lista *prox;
};

struct fila_lista{
    Lista *ini;
    Lista *fim;
};

FilaLista* fila_lista_cria(void) {
    FilaLista *f = (FilaLista*)malloc(sizeof(FilaLista));
    if(f==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

int fila_lista_vazia(FilaLista *f){
    return f->ini==NULL;
}


void fila_lista_insere(FilaLista *f, int info) {
    Lista *l = (Lista*)malloc(sizeof(Lista));
    if(l==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    l->info = info;
    l->prox = NULL;
    if(!fila_lista_vazia(f)) {
        f->fim->prox = l;
    }
    else {
        f->ini = l;
    }
    f->fim = l;
}

int fila_lista_remove(FilaLista *f) {
    Lista *l;
    int a;
    if(fila_lista_vazia(f)) {
        printf("Fila vazia!!!\n");
        exit(1);
    }
    a = f->ini->info;
    l = f->ini;
    f->ini = f->ini->prox;
    free(l);
    if(fila_lista_vazia(f)) {
        f->fim == NULL;
    }
    return a;
}

void fila_lista_imprime(FilaLista *f) {
    Lista *laux = f->ini;
    while(laux!=NULL) {
        printf("info: %d", laux->info);
        laux = laux->prox;
    }
}

void fila_lista_libera(FilaLista *f) {
    Lista *l = f->ini;
    Lista *laux;
    while(l!=NULL) {
        laux = l->prox;
        free(l);
        l = laux;
    }
    free(f);
}

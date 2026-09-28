#include <stdio.h>
#include <stdlib.h>
#include "pilha_lista.h"

typedef struct lista Lista;

struct lista{
    int info;
    Lista *prox;
};

struct pilha_lista {
    Lista *prim;
};

PilhaLista* pilha_lista_cria(void) {
    PilhaLista *p = (PilhaLista*)malloc(sizeof(PilhaLista));
    if(p==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    p->prim == NULL;
    return p;
}

void pilha_lista_push(PilhaLista *p, int info) {
    Lista *l = (Lista*)malloc(sizeof(Lista));
    if(l==NULL) {
        printf("Memoria insuficiente!!!\n");
        exit(1);
    }
    l->info = info;
    l->prox = p->prim;
    p->prim = l;
}

int pilha_lista_vazia(PilhaLista *p) {
    return (p->prim==NULL);
}

int pilha_lista_pop(PilhaLista *p) {
    int a;
    Lista *l;
    if(pilha_lista_vazia(p)){
        printf("Pilha Vazia!!!\n");
        exit(1);
    }
    l=p->prim;
    a=l->info;
    p->prim=l->prox;
    free(l);
    return a;
}

void pilha_lista_imprime(PilhaLista *p) {
    Lista *laux = p->prim;
    while (laux!=NULL)
    {
        printf("Info: %d", laux->info);
        laux = laux->prox;
    }
}

void pilha_lista_libera(PilhaLista *p) {
    Lista *l = p->prim;
    while(l!=NULL) {
        Lista *laux = l->prox;
        free(l);
        l = laux;
    }
    free(p);
}
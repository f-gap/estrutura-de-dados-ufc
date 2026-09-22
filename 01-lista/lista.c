#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista {
    int info;
    Lista *prox;
};

Lista* lst_cria() {
    return NULL;
}

int lst_vazia (Lista *l) {
    return (l==NULL);
}

Lista* lst_insere(Lista *l, int info) {
    Lista* ln = (Lista*)malloc(sizeof(Lista));
    ln->info = info;
    ln->prox = l;
    return ln;
}

Lista* lst_busca(Lista *l, int info) {
    Lista* l_aux = l;
    while (l_aux != NULL)
    {
        if(l_aux->info == info) {
            return l_aux;
        }
        l_aux = l_aux->prox;        
    }
    return NULL;
}

void lst_imprime(Lista *l) {
    Lista* l_aux = l;
    while(l_aux != NULL) {
        printf("Info = %d\n",l_aux->info);
        l_aux = l_aux->prox;
    }
}

Lista* lst_remove(Lista* l, int info) {
    if(l == NULL) {
        return NULL;
    }

    Lista *l_aux = l;

    if(l_aux->info == info) {
        l_aux = l->prox;
        free(l);
        return l_aux;
    }
    
    Lista* l_ant = l;
    l_aux = l->prox;

    while(l_aux != NULL) {
        if(l_aux->info == info) {
            l_ant->prox = l_aux->prox;
            free(l_aux);
            break;
        }
        l_ant = l_aux;
        l_aux = l_aux->prox;
    }
    return l;
}

void lst_libera(Lista *l) {
    Lista *l_prox;
    while(l!=NULL) {
        l_prox = l->prox;
        free(l);
        l = l_prox;
    }

}



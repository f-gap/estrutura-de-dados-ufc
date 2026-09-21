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
        l_aux = l->prox;        
    }
    return NULL;
}

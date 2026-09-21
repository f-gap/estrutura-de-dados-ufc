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

//main para testar as funcoes que criarmos
int main() {
    Lista* l = (Lista *)malloc(sizeof(Lista));
    Lista* l1 = (Lista *)malloc(sizeof(Lista));
    Lista* l2 = (Lista *)malloc(sizeof(Lista));
    l->info = 1;
    l->prox = l1;
    l1->info = 2;
    l1->prox = l2;
    l2->info = 3;
    l2->prox = NULL;
    lst_imprime(l);
}
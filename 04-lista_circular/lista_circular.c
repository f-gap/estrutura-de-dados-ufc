#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

struct lista_circ {
    int info;
    ListaCirc *prox;
};

ListaCirc* lst_circ_cria() {
    return NULL;
}

int lst_circ_vazia(ListaCirc *l) {
    return (l==NULL);
}

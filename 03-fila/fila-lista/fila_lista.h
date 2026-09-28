typedef struct fila_lista FilaLista;
/*Função que cria uma Fila.*/
FilaLista* fila_lista_cria(void);
/*Testa se uma Fila é vazia.*/
int fila_lista_vazia(FilaLista *f);
/*Função que adiciona um elemento em uma Fila.*/
void fila_lista_insere(FilaLista *f, int info);
/*Função que remove um elemento de uma Fila.*/
int fila_lista_remove(FilaLista *f);
/*Função que imprime os elementos de uma Fila.*/
void fila_lista_imprime(FilaLista *f);
/*Libera o espaço alocado para uma Fila*/
void fila_lista_libera(FilaLista *f);
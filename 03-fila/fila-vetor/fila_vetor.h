typedef struct fila_vetor FilaVetor;
/*Função que cria uma Fila.*/
FilaVetor* fila_vetor_cria(void);
/*Testa se uma Fila é vazia.*/
int fila_vetor_vazia(FilaVetor *f);
/*Função que adiciona um elemento em uma Fila.*/
void fila_vetor_insere(FilaVetor *f, int info);
/*Função que remove um elemento de uma Fila.*/
int fila_vetor_remove(FilaVetor *f);
/*Função que imprime os elementos de uma Fila.*/
void fila_vetor_imprime(FilaVetor *f);
/*Libera o espaço alocado para uma Fila.*/
void fila_vetor_libera(FilaVetor *f);
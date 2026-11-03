typedef struct lista Lista;
/* Cria uma lista vazia.*/
Lista* lst_cria();
/* Testa se uma lista é vazia.*/
int lst_vazia(Lista *l);
/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info);
/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info);
/* Imprime uma lista.*/
void lst_imprime(Lista *l);
/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info);
/* Libera o espaço alocado por uma lista.*/
void lst_libera(Lista *l);
/*Insere um elemento na lista de forma que o anterior seja menor que ele e o próximo seja maior*/
Lista *lst_insere_ordenado(Lista* l, int info);
// Imprime a lista recursivamente
void lst_imprime_rec(Lista *l);
// Imprime a lista invertida recursivamente
void lst_imprime_invertida_rec(Lista *l);
// Remove um elemento de uma lista com recursividade
Lista* lst_remove_rec(Lista *l, int info);
// Libera uma lista com recursividade
void lst_libera_rec(Lista *l);
// Testa se uma lista é igual a outra por recursividade
int lst_igual_rec(Lista *l,Lista *l2);
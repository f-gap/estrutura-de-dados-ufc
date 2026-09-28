// Define o tipo PilhaLista
typedef struct pilha_lista PilhaLista;

/* Função que cria uma pilha baseada em vetor. */
PilhaLista* pilha_lista_cria(void);

/* Testa se a pilha está vazia. */
int pilha_lista_vazia(PilhaLista *p);

/* Adiciona um elemento no topo da pilha. */
void pilha_lista_push(PilhaLista *p, int info);

/* Remove e retorna o elemento do topo. */
int pilha_lista_pop(PilhaLista *p);

/* Imprime os elementos do topo até a base. */
void pilha_lista_imprime(PilhaLista *p);

/* Libera a memória alocada para a pilha. */
void pilha_lista_libera(PilhaLista *p);
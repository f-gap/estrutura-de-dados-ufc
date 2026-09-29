// Define o tipo Pilha
typedef struct pilha Pilha;

/* Função que cria uma pilha baseada em vetor. */
Pilha* pilha_cria(void);

/* Testa se a pilha está vazia. */
int pilha_vazia(Pilha *p);

/* Adiciona um elemento no topo da pilha. */
void pilha_push(Pilha *p, int info);

/* Remove e retorna o elemento do topo. */
int pilha_pop(Pilha *p);

/* Imprime os elementos do topo até a base. */
void pilha_imprime(Pilha *p);

/* Libera a memória alocada para a pilha. */
void pilha_libera(Pilha *p);
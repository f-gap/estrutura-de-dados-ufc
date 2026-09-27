#ifndef PILHA_VETOR_H
#define PILHA_VETOR_H

// Define o tipo PilhaVetor
typedef struct pilha_vetor PilhaVetor;

/* Função que cria uma pilha baseada em vetor. */
PilhaVetor* pilha_vetor_cria(void);

/* Testa se a pilha está vazia. */
int pilha_vetor_vazia(PilhaVetor *p);

/* Adiciona um elemento no topo da pilha. */
void pilha_vetor_push(PilhaVetor *p, int info);

/* Remove e retorna o elemento do topo. */
int pilha_vetor_pop(PilhaVetor *p);

/* Imprime os elementos do topo até a base. */
void pilha_vetor_imprime(PilhaVetor *p);

/* Libera a memória alocada para a pilha. */
void pilha_vetor_libera(PilhaVetor *p);

#endif
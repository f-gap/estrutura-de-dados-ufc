# 📚 Pilha em C: Lista Encadeada vs Vetor

Uma implementação completa de **Pilha (Stack)** na linguagem C utilizando duas abordagens distintas de alocação de memória: **Lista Encadeada** (alocação dinâmica flexível) e **Vetor** (alocação dinâmica contígua).

Ambas as estruturas seguem o princípio **LIFO** (*Last In, First Out* - O último elemento a entrar é o primeiro a sair).

---

## 📸 Demonstração Visual

![Animação de Pilha - Push e Pop](https://upload.wikimedia.org/wikipedia/commons/b/b4/Lifo_stack.png)

---

## ⚖️ Comparativo entre as Abordagens

| Característica | Pilha com Lista Encadeada (`PilhaLista`) | Pilha com Vetor (`PilhaVetor`) |
| :--- | :--- | :--- |
| **Alocação de Memória** | Dinâmica por nó (`malloc` individual para cada elemento) | Bloco contíguo de memória reservado previamente |
| **Limite de Tamanho** | Limitado apenas pela RAM disponível | Definido na criação ou redimensionado manualmente |
| **Overhead de Memória** | Maior (cada elemento armazena o dado + ponteiro `prox`) | Menor (armazena apenas os dados sequenciais) |
| **Acesso/Performance** | Rápido ($O(1)$), mas com chamadas frequentes ao sistema (`malloc`/`free`) | Rápido ($O(1)$) e com melhor uso do cache da CPU |

---

## 🛠️ Interfaces e Funções

### 1. Pilha com Lista Encadeada (`pilha_lista.h`)

* `PilhaLista* pilha_lista_cria(void);`  
  Cria e inicializa a estrutura da pilha encadeada vazia.
* `int pilha_lista_vazia(PilhaLista *p);`  
  Retorna `1` se a pilha estiver vazia e `0` caso contrário.
* `void pilha_lista_push(PilhaLista *p, int info);`  
  Insere um elemento no topo da pilha (aloca novo nó no início da lista).
* `int pilha_lista_pop(PilhaLista *p);`  
  Remove e retorna o valor do elemento no topo da pilha (libera o nó).
* `void pilha_lista_imprime(PilhaLista *p);`  
  Exibe os elementos do topo até a base.
* `void pilha_lista_libera(PilhaLista *p);`  
  Libera todos os nós encadeados e a estrutura da pilha da memória.

---

### 2. Pilha com Vetor (`pilha_vetor.h`)

* `PilhaVetor* pilha_vetor_cria(void);`  
  Cria e aloca o vetor de elementos e a estrutura da pilha.
* `int pilha_vetor_vazia(PilhaVetor *p);`  
  Retorna `1` se a pilha estiver vazia e `0` caso contrário.
* `void pilha_vetor_push(PilhaVetor *p, int info);`  
  Insere um elemento na posição atual do topo e incrementa o índice.
* `int pilha_vetor_pop(PilhaVetor *p);`  
  Decremeneta o índice do topo e retorna o elemento removido.
* `void pilha_vetor_imprime(PilhaVetor *p);`  
  Exibe os elementos do topo até a base iterando sobre o vetor.
* `void pilha_vetor_libera(PilhaVetor *p);`  
  Libera o vetor e a estrutura principal da pilha.

---

## 💻 Exemplo Prático Unificado

```c
#include <stdio.h>
#include "pilha_lista.h"
#include "pilha_vetor.h"

int main() {
    printf("=== Testando Pilha com Lista Encadeada ===\n");
    PilhaLista* pl = pilha_lista_cria();
    pilha_lista_push(pl, 10);
    pilha_lista_push(pl, 20);
    pilha_lista_push(pl, 30);
    
    printf("Conteudo da Pilha Lista: ");
    pilha_lista_imprime(pl);
    
    printf("Elemento desempilhado: %d\n", pilha_lista_pop(pl));
    pilha_lista_libera(pl);

    printf("\n=== Testando Pilha com Vetor ===\n");
    PilhaVetor* pv = pilha_vetor_cria();
    pilha_vetor_push(pv, 100);
    pilha_vetor_push(pv, 200);
    pilha_vetor_push(pv, 300);
    
    printf("Conteudo da Pilha Vetor: ");
    pilha_vetor_imprime(pv);
    
    printf("Elemento desempilhado: %d\n", pilha_vetor_pop(pv));
    pilha_vetor_libera(pv);

    return 0;
}
```

---

## 🚀 Como Compilar e Executar

Para compilar o código de exemplo utilizando todos os arquivos do projeto:

```bash
# Compilação
gcc -o test_pilhas main.c pilha_lista.c pilha_vetor.c

# Execução
./test_pilhas
```
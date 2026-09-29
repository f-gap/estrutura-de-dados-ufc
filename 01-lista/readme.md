# 🔗 Lista Encadeada em C (Linked List)

Uma implementação completa de **Lista Encadeada Simples** em Linguagem C, incluindo funções iterativas e recursivas para manipulação de elementos.

![Animação de Lista Encadeada](https://miro.medium.com/v2/resize:fit:720/format:webp/0*kjVAEK1RNIrxfN1-.gif)

---

## 📌 Sobre o Projeto

Este projeto disponibiliza uma estrutura de dados de Lista Encadeada com suporte a inserção, busca, remoção, ordenação e exibição de dados. Para fins didáticos e práticos, a interface conta com versões **iterativas** e **recursivas** de diversas operações.

---

## 🛠️ Funções da Interface (`lista.h`)

### 🔹 Criação e Gerenciamento Básicos
* `Lista* lst_cria();`  
  Cria e inicializa uma lista vazia.
* `int lst_vazia(Lista *l);`  
  Verifica se a lista está vazia (retorna `1` para vazia e `0` caso contrário).
* `void lst_libera(Lista *l);`  
  Libera toda a memória alocada pela lista (versão iterativa).
* `void lst_libera_rec(Lista *l);`  
  Libera a memória alocada pela lista utilizando recursividade.

---

### 🔹 Inserção e Busca
* `Lista* lst_insere(Lista *l, int info);`  
  Insere um novo elemento no **início** da lista.
* `Lista* lst_insere_ordenado(Lista *l, int info);`  
  Insere um elemento mantendo a lista em **ordem crescente**.
* `Lista* lst_busca(Lista *l, int info);`  
  Busca por um nó com o valor `info` especificado. Retorna o ponteiro para o nó ou `NULL` se não encontrado.

---

### 🔹 Remoção
* `Lista* lst_remove(Lista *l, int info);`  
  Remove a primeira ocorrência do elemento `info` (versão iterativa).
* `Lista* lst_remove_rec(Lista *l, int info);`  
  Remove a primeira ocorrência do elemento `info` utilizando recursividade.

---

### 🔹 Impressão e Exibição
* `void lst_imprime(Lista *l);`  
  Imprime todos os elementos da lista (versão iterativa).
* `void lst_imprime_rec(Lista *l);`  
  Imprime os elementos da lista do início ao fim usando recursividade.
* `void lst_imprime_invertida_rec(Lista *l);`  
  Imprime a lista na ordem **inversa** (do último para o primeiro) utilizando recursividade.

---

### 🔹 Comparação
* `int lst_igual_rec(Lista *l, Lista *l2);`  
  Compara se duas listas são idênticas (mesmos elementos na mesma ordem) de forma recursiva. Retorna `1` se forem iguais e `0` caso contrário.

---

## 🚀 Como Compilar e Executar

Caso tenha um arquivo principal (`main.c`) para testar a biblioteca:

```bash
# Compilar o código
gcc -o programa main.c lista.c

# Executar o programa
./programa
```

---

## 💻 Exemplo de Uso

```c
#include <stdio.h>
#include "lista.h"

int main() {
    Lista* minhaLista = lst_cria();

    // Inserindo elementos de forma ordenada
    minhaLista = lst_insere_ordenado(minhaLista, 10);
    minhaLista = lst_insere_ordenado(minhaLista, 5);
    minhaLista = lst_insere_ordenado(minhaLista, 20);

    // Imprimindo a lista
    printf("Lista ordenada: ");
    lst_imprime(minhaLista);

    // Impressão invertida recursiva
    printf("Lista invertida: ");
    lst_imprime_invertida_rec(minhaLista);
    printf("\n");

    // Liberando a memória
    lst_libera_rec(minhaLista);

    return 0;
}
```
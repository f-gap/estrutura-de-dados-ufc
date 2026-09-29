# 📥 Fila em C (Queue)

Uma implementação completa de **Fila** (estrutura **FIFO** - *First In, First Out*) em Linguagem C.

Nesta estrutura, o **primeiro elemento a entrar é o primeiro a sair**. As inserções acontecem no final da fila (enqueue) e as remoções ocorrem no início (dequeue).

![Animação de Fila](https://miro.medium.com/v2/resize:fit:960/1*DSEFgwCum5ewVAfBMtXYOg.gif)

---

## 📌 Sobre o Projeto

Este repositório contém a implementação da estrutura de dados de Fila, permitindo o gerenciamento sequencial de elementos com base no princípio de ordem de chegada.

---

## 🛠️ Funções da Interface (`fila.h`)

* `Fila* fila_cria(void);`  
  Cria e inicializa uma fila vazia.
* `int fila_vazia(Fila *f);`  
  Verifica se a fila está vazia (retorna `1` se vazia, `0` caso contrário).
* `void fila_insere(Fila *f, int info);`  
  Insere um elemento no **final** da fila (*Enqueue*).
* `int fila_retira(Fila *f);`  
  Remove e retorna o elemento do **início** da fila (*Dequeue*).
* `void fila_imprime(Fila *f);`  
  Imprime todos os elementos da fila do início ao fim.
* `void fila_libera(Fila *f);`  
  Libera a memória alocada para a fila.

---

## 🚀 Como Compilar e Executar

```bash
# Compilar o código
gcc -o programa main.c fila.c

# Executar o programa
./programa
```

---

## 💻 Exemplo de Uso

```c
#include <stdio.h>
#include "fila.h"

int main() {
    Fila* f = fila_cria();

    // Inserindo elementos na fila
    fila_insere(f, 10);
    fila_insere(f, 20);
    fila_insere(f, 30);

    printf("Fila atual: ");
    fila_imprime(f); // Exibe: 10 20 30

    // Removendo o primeiro elemento
    int removido = fila_retira(f);
    printf("Elemento removido do início: %d\n", removido); // Exibe: 10

    printf("Fila após remoção: ");
    fila_imprime(f); // Exibe: 20 30

    // Liberando a memória
    fila_libera(f);

    return 0;
}
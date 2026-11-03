#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
 Lista* l1 = lst_cria();
 l1 = lst_insere(l1,61);
 l1 = lst_insere(l1,43);
 l1 = lst_insere(l1,4);
 l1 = lst_insere(l1,31);
 l1 = lst_insere(l1,51);
 l1 = lst_insere(l1,37);
 l1 = lst_remove_rec(l1,31);
 lst_imprime(l1);
 lst_imprime_invertida_rec(l1);
 printf("Num. nos c/ info < que 40: %d\n",menores(l1,40));
 printf("O comprimento da lista e %d\n",comprimento(l1));
 printf("Soma dos valores dos nos %d\n",soma(l1)); 
 printf("Num. nos com val. primos e %d\n",primos(l1));
 Lista* l2 = lst_cria();
 l2 = lst_insere(l2,35);
 l2 = lst_insere(l2,37); 
 l2 = lst_insere(l2,57); 
 
 Lista* l3=lst_conc(l1,l2); 
 lst_imprime(l3);
 l1=lst_diferenca(l1,l2);
 lst_imprime(l1); 
 
 lst_libera(l1);
 lst_libera(l2); 
 lst_libera(l3);
 
 system("PAUSE");
 return 0;
}
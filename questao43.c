/* 43. Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a
100. */


#include <stdio.h>

int main() {
 
 int i = 2; // Se começar com 1, ele nunca vai conseguir iterar, pq nao vai entrar no loop
 
 while(i <= 100) {
     if(i % 2 == 0){
     printf("%d\n", i);
     }
     i++;
 }
}
 
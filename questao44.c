/* 44. Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma
de todos eles. */


#include <stdio.h>

int main() {
 
 int i = 1; 
 int soma;
 
 for(i = 1; i <= 100; i++){
     
     printf("%d\n", i);
     soma = soma + i;
     
 }
 printf("soma: %d", soma);
}
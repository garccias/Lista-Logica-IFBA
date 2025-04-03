/* 62. Faça um programa em C que leia um array de 10 posições e conte quantos números pares
são elementos do array. Imprima esta quantidade */

#include <stdio.h>

int main() {
    
    int array[10];
    int i, par = 0;
    
   for(i = 0; i < 10; i++){
      printf("Digite um numero:\n");
      scanf("%d", &array[i]);
   }
   
   for(i = 0; i < 10; i++){
       
       if(array[i] % 2 == 0){
           par++;
       }
   }
  printf("%d", par);
/* 45. Escreva um programa que leia 5 números, e imprima a média entre eles. */


#include <stdio.h>

int main() {
 
 int i,soma,num;
 float media;
 soma = 0;
 
 for(i = 1; i <= 5; i++){
     
     printf("Digite seu numero:\n");
     scanf("%d", &num);
     soma = soma + num;
     
 }
 media = soma / 5;
 printf("media e %.2f", media);
}
 
 
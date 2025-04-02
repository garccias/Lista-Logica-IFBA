/* 32. Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número */

#include <stdio.h>

int main() {

 char caracter;
 
 printf("Digite um caracter:\n");
 scanf("%c", &caracter);
 
 if(caracter == 'A' ||caracter == 'a' ||caracter == 'E' ||caracter == 'e' || caracter ==
 'I' ||caracter == 'i' || caracter == 'O' || caracter == 'o' ||caracter == 'U' ||caracter == 'u'){
     
     printf("E vogal");
 }
 else if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')){
     printf("E consoante");
 }
 
 // '0' a '9' têm valores ASCII de 48 a 57. verifica se o caractere está nesse intervalo. Só tem como ser de 0 a 9, pois é um unico caracter
 else if(caracter >= '0' && caracter <= '9') {
     printf("E um numero");
 }
else{
    printf("E um simbolo");
}
}

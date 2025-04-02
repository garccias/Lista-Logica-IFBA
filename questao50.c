/* 50. Escreva um programa que leia um valor e imprima todas as possíveis combinações em
que o lançamento de um par de dados tenha como resultado da soma dos valores dos
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
imprimir as seguintes combinações:
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1 */


#include <stdio.h>

int main() {

 int valor, dado1, dado2;
 
 printf("Digite um valor:\n");
 scanf("%d", &valor);
 
 if(valor >= 2 && valor <= 12) {
     
     for(dado1 = 1; dado1 <= 6; dado1++){
         for(dado2 = 1; dado2 <= 6; dado2++){
             if(dado1 + dado2 == valor){
                 printf("%d\n %d\n", dado1, dado2);
             }
         }
     }
 }
 else{
     printf("Nao ha combinacoes possiveis");
     
 }
 }
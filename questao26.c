/*26. Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores */


#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    int maior, segundoMaior, soma;
    
    printf("Digite 3 numeros e descubra a soma dos 2 maiores:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    
    
    if(num1 >= num2 && num1 >= num3){
        maior = num1;
        segundoMaior = (num2 >= num3) ? num2 : num3;
    }
    if (num2 >= num1 && num2 >= num3){
        maior = num2;
        segundoMaior = (num1 >= num3) ? num1 : num3;
    }
    if(num3 >= num1 && num3 >= num2) {
        maior = num3;
        segundoMaior = (num1 >= num2) ? num1 : num2;
    }
    
    soma = maior + segundoMaior;
    
    printf("A soma e %d", soma);
   
  
}
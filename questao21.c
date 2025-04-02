// 21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.

#include <stdio.h>

int main() {

    int numero;
    
    printf("Digite um numero e veja se ele e positivo ou negativo:\n");
    scanf("%d", &numero);
    
    if(numero >= 0) {
        printf("O numero %d e positivo", numero);
    }
    else{
        printf("O numero %d e negativo", numero);
    }
    
    return 0;

}
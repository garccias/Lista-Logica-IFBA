/* 18. Escreva um programa que permute o valor de duas variáveis inteiras.*/

#include <stdio.h>

int main() {

    int valor1, valor2, permuta;

    printf("Digite o valor de 2 valores pra permutar eles:\n");
    scanf("%d %d", &valor1, &valor2);

    permuta = valor1;
    valor1 = valor2;
    valor2 = permuta;

    printf("valor 1: %d valor 2: %d", valor1, valor2);
}
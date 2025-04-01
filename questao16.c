/* 16. Escreva um programa para gerar o invertido de um número com três algarismos
(exemplo: o invertido de 498 é 894).*/

#include <stdio.h>

int main() {

    int numero, numeroInvertido;
    int centena, dezena, unidade;

    printf("Digite um numero com 3 algarismos e veja o inverso:\n");
    scanf("%d", &numero);

    centena = numero / 100;
    numero = numero % 100;
    dezena = numero / 10;
    numero = numero % 10;
    unidade = numero;

    printf("%d %d %d", unidade, dezena, centena);
}
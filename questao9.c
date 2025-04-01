/* 9. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado
seu raio e sua altura. */

#include <stdio.h>

int main() {

    float raio, altura, volume;
    float pi = 3.141;

    printf("Digite o valor do raio e da altura de uma lata de oleo:");
    scanf("%f %f", &raio, &altura);

    volume = pi * (raio * raio) * altura;

    printf("O volume e %2.f", volume);


}
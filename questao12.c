/* 12.Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para
Km/h. Para tal, multiplique o valor em m/s por 3,6. */

#include <stdio.h>

int main() {

float velocidadeM, velocidadeK;

printf("Digite a velocidade em m/s:\n");
scanf("%f", &velocidadeM);

velocidadeK = (velocidadeM * 3.6);

printf("%f", velocidadeK);
}

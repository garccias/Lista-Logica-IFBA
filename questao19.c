/* 19. Escreva um programa que calcule a raiz de uma equação do primeiro grau. */

#include <stdio.h>

int main() {

    float a, b, raiz;

    printf("Digite o valor de a e b:\n");
    scanf("%f %f", &a, &b);

    raiz = - (b / a);

    printf("%2.f", raiz);
}

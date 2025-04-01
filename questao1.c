/*1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
perímetro.*/

#include <stdio.h>

int main() {

    int base, altura, area, perimetro;

    printf("Digite o tamanho da base do retângulo:\n");
    scanf("%d", &base);

    printf("Digite o tamanho da altura do retângulo:\n");
    scanf("%d", &altura);

    area = base * altura;
    perimetro = base + base + altura + altura;

    printf("area: %d, perimetro: %d", area, perimetro);
} 
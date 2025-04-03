/* 65. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array, bem como suas respectivas posições. */

#include <stdio.h>

int main() {
    int array[20];
    int i, menor, maior, posMenor, posMaior;

    // Leitura do array
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Inicializando menor e maior com o primeiro elemento do array
    menor = maior = array[0];
    posMenor = posMaior = 0;

    // Percorrendo o array para encontrar menor e maior e suas posições
    for (i = 1; i < 20; i++) {
        if (array[i] > maior) {
            maior = array[i];
            posMaior = i;
        }
        if (array[i] < menor) {
            menor = array[i];
            posMenor = i;
        }
    }

    // Exibindo os resultados
    printf("\nO menor número é %d e está na posição %d\n", menor, posMenor);
    printf("O maior número é %d e está na posição %d\n", maior, posMaior);

    return 0;
}

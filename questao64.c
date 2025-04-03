/* 64. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array */

#include <stdio.h>

int main() {
    int array[20];
    int i, menor, maior;

    // Leitura do array
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Inicializando menor e maior com o primeiro elemento do array
    menor = maior = array[0];

    // Percorrendo o array para encontrar menor e maior
    for (i = 1; i < 20; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }

    // Exibindo os resultados
    printf("\nO menor número do array é: %d\n", menor);
    printf("O maior número do array é: %d\n", maior);

    return 0;
}


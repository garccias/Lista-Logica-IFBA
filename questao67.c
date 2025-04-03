/* 67. Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
vetor. */

#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorMaior[10];
    int i;

    // Leitura do primeiro vetor
    printf("Digite 10 números para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Leitura do segundo vetor
    printf("\nDigite 10 números para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Comparando e armazenando o maior valor de cada posição
    for (i = 0; i < 10; i++) {
        if (vetor1[i] > vetor2[i]) {
            vetorMaior[i] = vetor1[i];
        } else {
            vetorMaior[i] = vetor2[i];
        }
    }

    // Exibindo o vetor resultante
    printf("\nVetor resultante com os maiores valores:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorMaior[i]);
    }

    return 0;
}

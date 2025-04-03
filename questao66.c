/* 66. Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em
um segundo vetor e imprima este último. */

#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int i;

    // Leitura do primeiro vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Copiando os elementos do vetor1 para vetor2
    for (i = 0; i < 10; i++) {
        vetor2[i] = vetor1[i];
    }

    // Exibindo o vetor copiado (vetor2)
    printf("\nVetor copiado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }

    return 0;
}

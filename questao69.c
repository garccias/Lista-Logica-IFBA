/* 69. Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o
programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre
no vetor. */


#include <stdio.h>

int main() {
    int vetor[15]; 
    int i, valor, contador = 0;

    // Leitura do vetor
    printf("Digite 15 números inteiros:\n");
    for (i = 0; i < 15; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Leitura do valor a ser buscado
    printf("\nDigite um valor para contar no vetor: ");
    scanf("%d", &valor);

    // Contagem de ocorrências
    for (i = 0; i < 15; i++) {
        if (vetor[i] == valor) {
            contador++;
        }
    }

    // Exibir o resultado
    printf("\nO valor %d ocorre %d vezes no vetor.\n", valor, contador);

    return 0;
}

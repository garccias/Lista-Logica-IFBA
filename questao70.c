/* 70. Escreva um programa que carregue um array com tamanho variável. O tamanho máximo
do array é de 100 posições (carga de array com sentinela). */

#include <stdio.h>

#define MAX 100  // Definição do tamanho máximo do array
#define SENTINELA -1  // Definição do valor sentinela

int main() {
    int array[MAX];  // Declaração do array com tamanho máximo
    int i = 0, valor;

    printf("Digite valores inteiros para o array (digite %d para parar):\n", SENTINELA);

    // Leitura dos valores até atingir o tamanho máximo ou o valor sentinela
    while (i < MAX) {
        printf("Posição %d: ", i);
        scanf("%d", &valor);

        if (valor == SENTINELA) {
            break;  // Para a entrada de dados se o valor digitado for o sentinela
        }

        array[i] = valor;  
        i++;  
    }

    // Exibição dos valores armazenados no array
    printf("\nValores armazenados no array:\n");
    for (int j = 0; j < i; j++) {
        printf("Posição %d: %d\n", j, array[j]);
    }

    return 0;
}

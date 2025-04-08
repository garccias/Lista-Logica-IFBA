/* 72. Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um
inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou
-1 caso o valor não ocorra no vetor (Busca Binária).*/

#include <stdio.h>

int main() {

    int vetor[10];
    int inicio, meio, fim;
    int i, j, temporario = 0;
    int alvo;         // Número que o usuário quer buscar
    int resultado = -1; // Começa com -1 (não encontrado)

    // Entrada dos números
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenação do vetor (Bubble Sort)
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(vetor[j] > vetor[j + 1]) {
                temporario = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporario;
            }
        }
    }

    // Mostra o vetor ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Entrada do número a ser buscado
    printf("Digite o número que deseja buscar: ");
    scanf("%d", &alvo);

    // Busca binária
    inicio = 0;
    fim = 9;

    while(inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == alvo) {
            resultado = meio;     // guarda posição
            fim = meio - 1;       // continua buscando à esquerda
        } else if (vetor[meio] < alvo) {
            inicio = meio + 1;    // busca na metade direita
        } else {
            fim = meio - 1;       // busca na metade esquerda
        }
    }

    // Exibe o resultado final
    if (resultado != -1) {
        printf("Número encontrado na posição %d do vetor ordenado.\n", resultado);
    } else {
        printf("Número não encontrado no vetor.\n");
    }

    return 0;
}
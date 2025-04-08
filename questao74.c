#include <stdio.h>

#define TAM 30

int main() {
    int vetor[TAM];
    int novo[TAM];  // Para vetor sem duplicados
    int tamanho = 0;
    int opcao, i, j, valor, pos, encontrado;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Inserir elemento no final\n");
        printf("2. Inserir elemento em uma posição\n");
        printf("3. Remover elemento de uma posição\n");
        printf("4. Remover todos elementos iguais a um valor\n");
        printf("5. Gerar novo vetor sem duplicados\n");
        printf("6. Mostrar vetor atual\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                if (tamanho < TAM) {
                    printf("Digite o valor a inserir no final: ");
                    scanf("%d", &valor);
                    vetor[tamanho] = valor;
                    tamanho++;
                } else {
                    printf("Vetor cheio!\n");
                }
                break;

            case 2:
                if (tamanho < TAM) {
                    printf("Digite a posição (0 a %d): ", tamanho);
                    scanf("%d", &pos);
                    if (pos >= 0 && pos <= tamanho) {
                        printf("Digite o valor a inserir: ");
                        scanf("%d", &valor);
                        for (i = tamanho; i > pos; i--) {
                            vetor[i] = vetor[i - 1];
                        }
                        vetor[pos] = valor;
                        tamanho++;
                    } else {
                        printf("Posição inválida.\n");
                    }
                } else {
                    printf("Vetor cheio!\n");
                }
                break;

            case 3:
                printf("Digite a posição a remover (0 a %d): ", tamanho - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < tamanho) {
                    for (i = pos; i < tamanho - 1; i++) {
                        vetor[i] = vetor[i + 1];
                    }
                    tamanho--;
                    printf("Elemento removido.\n");
                } else {
                    printf("Posição inválida.\n");
                }
                break;

            case 4:
                printf("Digite o valor a remover: ");
                scanf("%d", &valor);
                i = 0;
                while (i < tamanho) {
                    if (vetor[i] == valor) {
                        for (j = i; j < tamanho - 1; j++) {
                            vetor[j] = vetor[j + 1];
                        }
                        tamanho--;
                    } else {
                        i++;
                    }
                }
                printf("Todos os elementos com o valor %d foram removidos.\n", valor);
                break;

            case 5:
                // Gera novo vetor sem duplicados
                int novoTam = 0;
                for (i = 0; i < tamanho; i++) {
                    encontrado = 0;
                    for (j = 0; j < novoTam; j++) {
                        if (vetor[i] == novo[j]) {
                            encontrado = 1;
                            break;
                        }
                    }
                    if (!encontrado) {
                        novo[novoTam] = vetor[i];
                        novoTam++;
                    }
                }

                printf("Novo vetor sem duplicados: ");
                for (i = 0; i < novoTam; i++) {
                    printf("%d ", novo[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Vetor atual: ");
                for (i = 0; i < tamanho; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}

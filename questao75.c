#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temporario = 0;
    int inicio, meio, fim;
    int alvo;         // Número que o usuário quer buscar
    int resultado = -1; // Começa com -1 (não encontrado)

    


for (i = 0; i < 10; i++) {
    printf("Digite o %dº número inteiro: ", i + 1);
    scanf("%d", &vetor[i]);
}

// Bubble sort
for(i = 0; i < 9; i++) {
    for(j = 0; j < 9 - i; j++) {
        if(vetor[j] > vetor[j + 1]) {
            temporario = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = temporario;
        }
    }
}
printf("Vetor ordenado: ");
for (i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);

}

printf("\nDigite o número que deseja buscar: ");
scanf("%d", &alvo);

inicio = 0;
fim = 9;

while (inicio <= fim) {
    meio = (inicio + fim) / 2;

    if (vetor[meio] == alvo) {
        resultado = meio;
        fim = meio - 1; // Continua procurando à esquerda para achar a primeira ocorrência
    } else if (vetor[meio] < alvo) {
        inicio = meio + 1;
    } else {
        fim = meio - 1;
    }
}

if (resultado != -1) {
    printf("Número encontrado na posição %d do vetor ordenado.\n", resultado);
} else {
    printf("Número não encontrado no vetor.\n");
}

return 0;
}

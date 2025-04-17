#include <stdio.h>

int main() {
    char frase[200];
    int i = 0, inicio = 0, tamanhoAtual = 0;
    int maiorInicio = 0, maiorTamanho = 0;

    printf("Digite uma frase normalizada:\n");
    fgets(frase, 200, stdin);

    while (frase[i] != '\0' && frase[i] != '\n') {
        if (frase[i] != ' ') {

            tamanhoAtual++;
        } else {
            // fim da palavra
            if (tamanhoAtual > maiorTamanho) {
                maiorTamanho = tamanhoAtual;
                maiorInicio = inicio;
            }
            // prepara para a próxima palavra
            tamanhoAtual = 0;
            inicio = i + 1;
        }
        i++;
    }

    if (tamanhoAtual > maiorTamanho) {
        maiorTamanho = tamanhoAtual;
        maiorInicio = inicio;
    }

    printf("Maior palavra: ");
    for (i = maiorInicio; i < maiorInicio + maiorTamanho; i++) {
        putchar(frase[i]);
    }
    printf("\n");

    return 0;
}

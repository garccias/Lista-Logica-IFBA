#include <stdio.h>

int main() {
    char original[200], substring[200];
    int inicio, fim, i, j = 0;

    printf("Digite a string original:\n");
    fgets(original, 200, stdin);

    printf("Digite a posição inicial da substring: ");
    scanf("%d", &inicio);

    printf("Digite a posição final da substring: ");
    scanf("%d", &fim);

    if (inicio < 0 || fim < inicio) {
        printf("Posições inválidas!\n");
        return 1;
    }

    for (i = inicio; i <= fim && original[i] != '\0' && original[i] != '\n'; i++) {
        substring[j] = original[i];
        j++;
    }

    substring[j] = '\0'; 

    printf("Substring gerada: %s\n", substring);

    return 0;
}

#include <stdio.h>

int main() {
    char original[200], normalizada[200];
    int i = 0, j = 0;
    int espacoAnterior = 1;// ignorar espacos inicias

    printf("Digite uma frase:\n");
    fgets(original, 200, stdin);

    while (original[i] != '\0') {
        if (original[i] != ' ' && original[i] != '\n') {
            normalizada[j] = original[i];
            j++;
            espacoAnterior = 0;
        }
        else if (original[i] == ' ' && espacoAnterior == 0) {
            normalizada[j] = ' ';
            j++;
            espacoAnterior = 1;
        }
        i++;
    }

   
    normalizada[j] = '\0'; 

    printf("Frase normalizada:\n%s\n", normalizada);

    return 0;
}

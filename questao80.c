/* 80. Escreva um programa em C que leia duas string e informe se a primeira contém a
segunda.*/

#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j, encontrado = 0;

    printf("Digite a primeira string:\n");
    scanf(" %s", str1);

    printf("Digite a segunda string:\n");
    scanf(" %s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        // Começa a verificar a partir da posição i da str1
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }

        // Se percorreu toda a str2, então ela está contida
        if (str2[j] == '\0') {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }

    return 0;
}

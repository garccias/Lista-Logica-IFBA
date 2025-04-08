/* 79. Escreva um programa em C, que gere a substring de uma string original, dado a posição
inicial e a final da substring.*/

#include <stdio.h>

int main() {
    
    char string[50], substring[50];
    int i, j;
    int inicial, final;

    printf("Digite uma string:\n");
    scanf(" %s", string);
    
    printf("Posicao inicial:\n");
    scanf("%d", &inicial);
    
    printf("Posicao final:\n");
    scanf("%d", &final);
    
   for (i = inicial; i <= final && string[i] != '\0'; i++) {
        substring[j] = string[i];
        j++;
    }

    substring[j] = '\0'; // Termina a nova string corretamente

    printf("Substring gerada: %s\n", substring);
}


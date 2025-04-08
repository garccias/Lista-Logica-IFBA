/* 77. Escreva um programa em C, que leia uma string, gere uma nova string com o texto
invertido e imprima esta nova string. */

#include <stdio.h>

int main() {
    
    char string[50], invertida[50];
    int i, j = 0;
    int vogal = 0;

    printf("Digite uma string:\n");
    scanf(" %s", string);
    
    for (i = 0; string[i] != '\0'; i++){
        
        j++;
    }
    
    for(i = 0; i < j; i++) {
        invertida[i] = string[j - 1 - i];
    }
      invertida[j] = '\0'; // Finaliza a nova string com o caractere nulo

     printf("String invertida: %s\n", invertida);


    

}

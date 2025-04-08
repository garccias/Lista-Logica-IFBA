/* 76. Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais
existem nesta string. */

#include <stdio.h>

int main() {
    
    char string[50];
    int i;
    int vogal = 0;

    printf("Digite uma string:\n");
    scanf(" %s, string");
    
    for (i = 0; string[i] != '\0'; i++){
        
        if(string[i] == 'A' || string[i] == 'a' || string[i] == 'E'|| string[i] == 'e'|| string[i] == 'I' ||
        string[i] == 'i'|| string[i] == 'O' || string[i] == 'o' || string[i] == 'U' || string[i] == 'u'){
            
            vogal++;
        }
        
    }
}

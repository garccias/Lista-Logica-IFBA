/*78. Escreva um programa em C, que leia uma string e um caracter e conte o número de
ocorrências do caracter lido na string. */

#include <stdio.h>

int main() {
    
    char string[50], caracter;
    int i, contador = 0;
    

    printf("Digite uma string:\n");
    scanf(" %s", string);
    
    printf("Qual caracter você quer buscar:\n");
    scanf(" %c", &caracter);
    
    for(i = 0; string[i] != '\0'; i++){
        
        if(string[i] == caracter){
            contador++;
        }
    }
    printf("%d", contador);
    
}
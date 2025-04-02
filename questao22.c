// 22. Escreva um programa que leia um número e exiba o seu módulo.


#include <stdio.h>

int main() {
    
    int numero;
    
    printf("Digite seu numero e veja o modulo dele:\n");
    scanf("%d", &numero);
    
    if(numero >= 0) {
        
        printf("|%d|", numero);
    }
    else{
        numero = numero * -1;
        printf("|%d|", numero);
    }
 
}
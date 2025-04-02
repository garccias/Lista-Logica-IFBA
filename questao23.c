// 23. Escreva um programa que leia um número e imprima se este número é ou não par.


#include <stdio.h>

int main() {
    
    int numero;
    
    printf("Digite seu numero e veja se ele e par ou impar:\n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0) {
        
        printf("o numero %d e par", numero);
    }
    else{
        printf("o numero %d e impar", numero);
    }
 
}
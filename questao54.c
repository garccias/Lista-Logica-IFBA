/* 54. Construa um programa que receba um número e verifique se ele é um número triangular.
(Um número é triangular quando é resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4)  */


#include <stdio.h>

int main() {
    
    int numero, i;
    int n1 = 1, n2 = 2, n3 = 3;
    
    printf("Digite um numero e veja se ele é um numero triangular:\n");
    scanf("%d", &numero);
    
    for(i = 0; i <= numero; i++) {
        
        if((n1 * n2 * n3) == numero){
            printf("E um numero triangular");
        }
        n1 = n2;
        n2 = n3;
        n3 = n3 + 1;
    }
    
}
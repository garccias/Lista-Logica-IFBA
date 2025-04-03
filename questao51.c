/* 51. A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo). */



#include <stdio.h>

int main() {

int n, i;
int soma = 0;
int temporario = 1, atual = 1 ,anterior = 1;

printf("Digite até quantos termos você quer a série de Fibonacci:\n");
scanf("%d", &n);

printf("1,");
for(i = 2; i<= n; i++){
        printf("%d,", atual);

    temporario = atual;
    atual = anterior + atual;
    anterior = temporario;
    
}
}
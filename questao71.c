/* 71. Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O
programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o
valor não ocorra no vetor (Busca Sequencial) */


#include <stdio.h>

void main() {
    
    int array[10];
    int i, j;
    int numero;
    int encontrado = 0;
    
    printf("Digite um numero e veja se ele esta no array:\n");
    scanf("%d", &numero);
    
    for(i = 0; i < 10; i++){
        
        scanf("%d", &array[i]);
    }
    
    for(j = 0; j < 10; j++){
        
        if(array[j] == numero){
            printf("%d esta no array", array[j]);
            encontrado = 1;
            break;
        }
    }
    
    if(encontrado == 0){
        printf("-1");
    }
    
}
    
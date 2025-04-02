/* 25. Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de
dias deste mês. */


#include <stdio.h>

int main() {
    
    int mes;
    
    printf("Digite o numero equivalente ao mes e veja a quantidade de dias desse mes:\n");
    scanf("%d", &mes);
    
    switch(mes) {
    
        case 2:
        printf("28");
        break;
        
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");
        break;
    }
     
}
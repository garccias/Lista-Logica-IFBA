/* 8. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
valor de temperatura em Fahrenheit e exibi-lo em Celsius */

#include <stdio.h>

int main() {
    
    float fahrenheit, celsius;
    
    printf("Digite a temperatura em Fahrenheit e veja quanto é em Celsius:\n");
    scanf("%f", &fahrenheit);
    
    celsius = (5.0/9.0) * (fahrenheit - 32);
    
    printf("O valor em celsius e %2.f", celsius);
    
}
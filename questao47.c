/* 47. Escreva um programa que calcule o resto da divisão de A por B (número inteiros e
positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são
passados pelo usuário através do teclado. */


#include <stdio.h>

int main() {
 
 int i = 0;
 int divisor, dividendo, resultado = 0;
 
 printf("Coloque o divisor e o dividendo:\n");
 scanf("%d %d", &divisor, &dividendo);
 
 while (dividendo >= divisor) {
        dividendo -= divisor; // Subtraindo o divisor do dividendo
        i++;          // Incrementando o quociente a cada subtração
 }
 
 
 printf("%d", dividendo);
 
}
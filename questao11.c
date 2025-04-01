/* 11. Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
2 notas de provas. */

#include <stdio.h>

int main() {
    
    float bi1Nota1, bi1Nota2, bi2Nota1, bi2Nota2, notaSemestral;
    
    printf("Digite as 2 notas do primeiro bimetre:\n");
    scanf("%f %f", &bi1Nota1, &bi1Nota2);
    
    printf("Digite as 2 notas do segundo bimetre:\n");
    scanf("%f %f", &bi2Nota1, &bi2Nota2);
    
    notaSemestral = (bi1Nota1 + bi1Nota2 + bi2Nota1 + bi2Nota2) / 4.0;
    
    printf("%2.f", notaSemestral);
    
    
}
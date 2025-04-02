/* 36. Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação: A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações. */


#include <stdio.h>

int main() {
    
    float nota1, nota2, nota3, nota4, nota5;
    
    printf("Digite suas 5 notas aqui:\n");
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);
    
    if(nota1 >= 70 && nota2 >= 70 && nota3 >= 70 && nota4 >= 70 && nota5 >= 70) {
        
        printf("A");
    }
    
    else if(nota1 >= 70 && nota2 >= 70 && nota4 >= 70 && (nota3 < 70 || nota5 < 70)) {
        printf("B");
  
    }
    
    else if(nota1 >= 70 && nota2 >= 70 && (nota3 >= 70 || nota4 >= 70) && nota5 <70) {

        printf("C");
    }
    
    else{
        printf("Reprovado");
    }

}


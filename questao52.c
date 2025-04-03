/* 52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são
fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos
dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par
Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três
termos.  */



#include <stdio.h>

int main() {

int num1, num2;
int i, n, proximo = 0;
    

printf("Digite 2 termos e veja a serie de Fetuccine:\n");
scanf("%d %d", &num1, &num2);

printf("Digite os N primeiros termos:\n");
scanf("%d", &n);

printf("%d, %d", num1, num2);

for(i = 3; i <= n; i++){
    
    if(i % 2 == 0){
        
    proximo = num1 - num2 ;
    
    }
    else{
        proximo = num1 + num2;
    }
    num1 = num2;
    num2 = proximo;
    printf(", %d", proximo);
}
}
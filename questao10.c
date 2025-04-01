/* 10. Converter um inteiro informado menor que 32 para sua representação em binário */

#include <stdio.h>

int main() {
int b1, b2, b3, b4, b5, b6;
int numDecimal;

printf("Digite o numero decimal ate 32 aqui:\n");
scanf("%d", &numDecimal);

if (numDecimal <= 32){
    
b1 = numDecimal % 2;
numDecimal = numDecimal / 2;

b2 = numDecimal % 2;
numDecimal = numDecimal / 2;

b3 = numDecimal % 2;
numDecimal = numDecimal / 2;

b4 = numDecimal % 2;
numDecimal = numDecimal / 2;

b5 = numDecimal % 2;
numDecimal = numDecimal / 2;

b6 = numDecimal % 2;
numDecimal = numDecimal / 2;
}

printf("%d %d %d %d %d %d", b6,b5,b4,b3,b2,b1);
    
}
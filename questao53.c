/* 53. Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse
a população do país B.  */



#include <stdio.h>

int main() {

int anos = 0;
int paisA = 5000000;
int paisB = 7000000;

while(paisA <= paisB){
    
    paisA = (paisA * 0.03) + paisA;
    paisB = (paisB * 0.02) + paisB;
    anos++;
}
printf("%d anos", anos);
}
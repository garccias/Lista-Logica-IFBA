/* 13. Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
equivalente desse circuito. */

#include <stdio.h>

int main() {
    
  float r1,r2,r3,reqParalelo, reqTotal;
    
printf("Insira a R1, R2, R3:\n");
scanf("%f %f %f", &r1, &r2, &r3);

reqParalelo = (r1 * r2) / (r1 + r2);
reqTotal = reqParalelo + r3;

printf("%2.f", reqTotal);


}
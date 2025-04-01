/* 4. Dado os 3 lados de um triângulo, determinar o perímetro do mesmo*/

#include <stdio.h>

int main() {
    
   int lado1, lado2, lado3, perimetro;
   
   printf("Digite os 3 lados do triângulo:\n");
   scanf("%d %d %d", &lado1, &lado2, &lado3);
   
  perimetro = lado1 + lado2 + lado3;
  
  printf("O perimetro e %d", perimetro);
}
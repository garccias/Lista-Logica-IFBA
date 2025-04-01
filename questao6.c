/* 6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.*/

#include <stdio.h>

int main() {

    int num1, num2, result, resto;

    printf("Digite 2 numeros e veja o quociente e o resto da divisao inteira entre eles:");
    scanf("%d %d", &num1, &num2);

    result = num1 / num2; 
    resto = num1 % num2;

    printf("O resultado e %d e o resto %d", result, resto);

}
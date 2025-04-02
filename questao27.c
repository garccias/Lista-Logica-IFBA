/*27. Escreva um programa que leia 3 números e calcule a média ponderada entre eles.
Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5. */


#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    int maior;
    float media;
    
    printf("Digite 3 numeros e descubra a media ponderada entre eles:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    maior = num1;
    
    if(num1 >= num2 && num1 >= num3){
        media = ((num1 * 5) + (num2 * 2.5) + (num3 * 2.5)) / 10;
    }
    if (num2 >= num1 && num2 >= num3){
        media = ((num2 * 5) + (num1 * 2.5) + (num3 * 2.5)) / 10;
    }
    if(num3 >= num1 && num3 >= num2) {
        media = ((num3 * 5) + (num1 * 2.5) + (num2 * 2.5)) / 10;
    }
    
    printf("A media e %.2f", media);

}
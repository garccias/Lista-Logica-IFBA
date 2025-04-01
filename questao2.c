/* Dado o tamanho do lado de um quadrado, calcular aárea e o perímetro do mesmo*/

#include <stdio.h>

int main() {
    
    int lado, area, perimetro;
    
    printf("Digite o tamanho do lado de um quadrado:\n");
    scanf("%d", &lado);
    
    area = lado * lado;
    perimetro = 4 * lado;
    
    printf("A area e: %d e o perimetro: %d", area, perimetro);
    
}
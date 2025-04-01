/* 3. Dado o tamanho de um raio de uma circunferência, calcular a área e o perímetro da mesma*/

#include <stdio.h>

int main() {

    float raio, area, perimetro;
    float pi = 3.14;

    printf("Digite o tamanho do raio de uma circunferência:\n");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;

    printf("A area e %2.f e o perimetro %2.f", area, perimetro);
}
/* 15. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
calcular a altura do prédio. */

#include <stdio.h>

int main() {
    
    float alturaPredio, alturaPessoa, sombraPredio, sombraPessoa;
    
    
    printf("Digite a sombra do predio, sombra da pessoa e altura da pessoa e descubra a altura do predio:\n");
    scanf("%f %f %f", &sombraPredio, &sombraPessoa, &alturaPessoa);
    
    alturaPredio = (sombraPredio * alturaPessoa) / sombraPessoa;
    
    printf("O predio tem altura de %2.f cm", alturaPredio);
    
}
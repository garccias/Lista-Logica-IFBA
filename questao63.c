#include <stdio.h>

int main() {
    
    int array[10], array2[10], vetorResultante[10];
    int i;
    
    // Leitura do primeiro vetor
    for(i = 0; i < 10; i++){
        printf("Digite um número para o primeiro vetor: ");
        scanf("%d", &array[i]);
    }
   
    // Leitura do segundo vetor
    for(i = 0; i < 10; i++){
        printf("Digite um número para o segundo vetor: ");
        scanf("%d", &array2[i]);
    }
   
    // Soma dos vetores (elemento por elemento)
    for (i = 0; i < 10; i++) {
        vetorResultante[i] = array[i] + array2[i]; 
    }

    // Exibição do vetor resultante
    printf("\nVetor resultante da soma:\n");
    for (i = 0; i < 10; i++) {
        printf("soma[%d] = %d\n", i, vetorResultante[i]);  
    }

   
}
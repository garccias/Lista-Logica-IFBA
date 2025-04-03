#include <stdio.h>

int main() {
    
    int n;
    int i, j;
    float soma = 1.0, termo, potencia;
    int denominador;

    printf("Digite o número de termos (N): ");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++){ // i controla os termos
        
        denominador = (2 * i + 1); 

        potencia = 1.0; 
        
        for(j = 1; j <= denominador; j++){ 
            potencia *= j; // Calcula fatorial do denominador
        }
        
        termo = 1.0 / potencia; // Calcula o termo da série
        
        if(i % 2 == 0){ 
            soma += termo;
        } else { 
            soma -= termo; 
        }
    }
    
    soma *= 2; 

    printf("Aproximação de π com %d termos: %.10f\n", n, soma);

 
}

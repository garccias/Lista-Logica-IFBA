#include <stdio.h>

int main() {
    int n, i, j;
    double soma = 1.0, fatorial;

    printf("Digite o número de termos (N): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {  
        fatorial = 1.0;  

        // Calcula o fatorial de i
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }

        soma += 1.0 / fatorial; // Soma o termo da série
    }

    printf("Aproximação de e com %d termos: %.10f\n", n, soma);

}

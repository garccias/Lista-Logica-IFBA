#include <stdio.h>

int main() {
    
    int n, i, j;
    float soma = 0;
    float potencia;

printf("Digite o N termo:\n");
scanf("%d", &n);

for(i = 1; i <= n; i++){
    
    potencia = 1;

  for(j = 0; j < i; j++) { 
            potencia *= i;
  }
soma += 1.0 / potencia;  
}
soma = soma + 1;
printf("%.2f", soma);

}
// 5. Ler um número inteiro e exibir o seu sucessor.

#include <stdio.h>

int main() {

    int numero, sucessor;

    printf("Digite seu numero e veja o sucessor dele:\n");
    scanf("%d", &numero);

    sucessor = numero + 1;

    printf("O sucessor e %d", sucessor);
}
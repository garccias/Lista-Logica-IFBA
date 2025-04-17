#include <stdio.h>

int main() {
    char hex[100];
    int i = 0, decimal = 0, valor;

    printf("Digite um número hexadecimal: ");
    scanf("%s", hex);

    while (hex[i] != '\0') {
        i++;
    }

    int potencia = 1;
    for (int j = i - 1; j >= 0; j--) {
        if (hex[j] >= '0' && hex[j] <= '9') {
            valor = hex[j] - '0';  
        } else if (hex[j] >= 'A' && hex[j] <= 'F') {
            valor = hex[j] - 'A' + 10; 
        } else if (hex[j] >= 'a' && hex[j] <= 'f') {
            valor = hex[j] - 'a' + 10;
        } else {
            printf("Caractere inválido na posição %d: %c\n", j, hex[j]);
            return 1;
        }

        decimal += valor * potencia;
        potencia *= 16;
    }

    printf("Valor decimal: %d\n", decimal);
    return 0;
}

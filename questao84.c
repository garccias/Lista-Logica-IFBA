#include <stdio.h>

int main() {
    char str[200];
    int i, j, ehPalindromo = 1;

    printf("Digite a string: ");
    fgets(str, 200, stdin);

    for (j = 0; str[j] != '\0' && str[j] != '\n'; j++); 
    j--; 

    // Verificando se é palíndromo
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            ehPalindromo = 0;
            break;
        }
    }

    
    if (ehPalindromo) {
        printf("É palíndromo!\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}

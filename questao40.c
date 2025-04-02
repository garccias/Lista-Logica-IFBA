#include <stdio.h>

int main() {
    int num, dezena, unidade;
    
    printf("Digite um numero de 1 a 100: ");
    scanf("%d", &num);

    if (num < 1 || num > 100) {
        printf("Número fora do intervalo permitido.\n");
    } 
    else if (num == 100) {
        printf("cem\n");
    } 
    else if (num >= 10 && num <= 19) {
        switch (num) {
            case 10: printf("dez\n"); break;
            case 11: printf("onze\n"); break;
            case 12: printf("doze\n"); break;
            case 13: printf("treze\n"); break;
            case 14: printf("quatorze\n"); break;
            case 15: printf("quinze\n"); break;
            case 16: printf("dezesseis\n"); break;
            case 17: printf("dezessete\n"); break;
            case 18: printf("dezoito\n"); break;
            case 19: printf("dezenove\n"); break;
        }
    } 
    else {
         dezena = num / 10;
         unidade = num % 10;

        // Escreve a parte das dezenas
        switch (dezena) {
            case 2: printf("vinte"); break;
            case 3: printf("trinta"); break;
            case 4: printf("quarenta"); break;
            case 5: printf("cinquenta"); break;
            case 6: printf("sessenta"); break;
            case 7: printf("setenta"); break;
            case 8: printf("oitenta"); break;
            case 9: printf("noventa"); break;
        }

        // Adiciona a unidade se necessário
        if (unidade > 0 && dezena > 0) {
            printf(" e ");
        }

        switch (unidade) {
            case 1: printf("um"); break;
            case 2: printf("dois"); break;
            case 3: printf("três"); break;
            case 4: printf("quatro"); break;
            case 5: printf("cinco"); break;
            case 6: printf("seis"); break;
            case 7: printf("sete"); break;
            case 8: printf("oito"); break;
            case 9: printf("nove"); break;
        }

        printf("\n");
    }

    return 0;
}

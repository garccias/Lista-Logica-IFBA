// 7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias. 

#include <stdio.h>

int main() {

    int idadeDias, anos, meses, dias, resto;

    printf("Digite sua idade em dias e veja sua idade em anos, meses e dias:");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365; 
    resto = idadeDias % 365;
    meses = resto / 30;
    resto = resto % 30;
    dias = resto;

    printf("%d anos  %d meses  %d dias", anos, meses, dias);

}
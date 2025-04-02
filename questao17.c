/* 17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00). */

#include <stdio.h>

int main() {
    
    int quantiaSolicitada, restante, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    
    printf("Digite a quantia solicitada para o saque:\n");
    scanf("%d", &quantiaSolicitada);
    
    nota100 = quantiaSolicitada / 100;
    restante = quantiaSolicitada % 100;
    
    nota50 = restante / 50;
    restante = restante % 50;
    
    nota20 = restante / 20;
    restante = restante % 20;
    
    nota10 = restante / 10;
    restante = restante % 10;
    
    nota5 = restante / 5;
    restante = restante % 5;
    
    nota2 = restante / 2;
    restante = restante % 2;
   
    nota1 = restante;
    
    printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1", nota100, nota50, nota20, nota10, nota5, nota2, nota1);

}
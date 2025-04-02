/* 34. Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido */


#include <stdio.h>

int main() {

 float rendaM, valorTotal;
 int numeroPrestacao;
 
 printf("Digite sua renda mensal, o valor do emprestimo que voce quer e o numero das prestacoes:\n");
 scanf("%f %f %d", &rendaM, &valorTotal, &numeroPrestacao);
 
 if((rendaM *10) >= valorTotal && (valorTotal / numeroPrestacao) <= (rendaM * 0.3)){
     printf("Pode ser concedido");
 }
else{
    printf("Nao pode ser concedido");
}  

}
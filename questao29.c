/*29. Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
desconto é 334,29, o que seja menor. */


#include <stdio.h>

int main() {
    
   float salario, descontoMaximo, desconto;
   
   printf("Digite o seu salario e veja o desconto previdenciario:\n");
   scanf("%f", &salario);
   
   descontoMaximo = 334.29;
   
   desconto = salario * 0.11;
   
   if(desconto <= descontoMaximo) {
       
       printf("O desconto e %.2f", desconto);
   }
   else{
       printf("O desconto e %.2f", descontoMaximo);
   }
   
}
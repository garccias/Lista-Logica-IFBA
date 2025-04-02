/* 30. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90. */


#include <stdio.h>

int main() {
    
 char tipo;
 float litros, valor;
 
 printf("Tipo de combustivel e quantos litros:\n");
 scanf("%c %f", &tipo, &litros);
 
 if(tipo == 'G') {
     if(litros <= 25){
         valor = (2.70 * 0.97) * litros;
     }
     else{
         valor = (2.70 * 0.95) * litros;
     }
 }
 if(tipo == 'A'){
     
     if(litros <= 25){
         valor = (1.90 * 0.98) * litros;
     }
     else{
         valor = (1.90 * 0.96) * litros;
     }
 }
 
 printf("O valor a ser pago e %.2f", valor);
 
}

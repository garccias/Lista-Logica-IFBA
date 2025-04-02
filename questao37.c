/* 37. Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.
 */


 #include <stdio.h>

 int main() {
     
     int tipo, area, precoA;
     float total;
     
     printf("Diga o tipo e area:\n");
     scanf("%d %d", &tipo, &area);
     
     switch(tipo){
         
         case 1: 
         precoA = 50;
         break;
         
         case 2: 
         precoA = 100;
         break;
         
         case 3: 
         precoA = 150;
         break;
         
         case 4: 
         precoA = 250;
         break;
         
     }
     
     total = precoA * area;
     
     if(tipo == 1 && area > 1000) {
         
         total = (50 * area) * 0.95;
     }
     
     else if(tipo == 2 && area > 1000) {
         
         total = (100 * area) * 0.95;
     }
     
     else if(tipo == 3 && area > 1000) {
         
         total = (150 * area) * 0.95;
     }
     
     else if(tipo == 4 && area > 1000) {
         
         total = (250 * area) * 0.95;
     }
     
     if (total > 750){
     
     total = 750 + (total - 750) * 0.9;
 }
 }
     
     
 
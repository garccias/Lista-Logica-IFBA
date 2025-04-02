/* 39. Em diversas situações, é útil o uso de dígitos verificadores. Dígito
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do
número, começando da direita para a esquerda (do dígito menos significativo para o
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o
valor do dígito verificador quando este é 10. Escreva um programa que receba um
número com os 4 primeiros dígitos de uma agência e imprima o número da agência
completo (numero – dv).
 */


 #include <stdio.h>

 int main() {
  
  int digitos, resto;
  int milhar, cen, dez, uni;
  int codigo;
  
  printf("Digite os 4 primeiros numeros da agencia:\n");
  scanf("%d", &digitos);
  
  milhar = digitos / 1000;
  resto = digitos % 1000;
  
  cen = resto / 100;
  resto = resto % 100;
  
  dez = resto / 10;
  resto = resto % 10;
  
  uni = resto;
  
 codigo = (((uni * 2) + (dez * 3) + (cen * 4) + (milhar * 5)) % 11);
 
 if (codigo == 0) {
         codigo = 0; }
 
 codigo = 11 - codigo;
 
 
 if(codigo == 10){
     printf("%d-x", digitos);
 }
 else if (codigo == 11) {
         printf("%d-0\n", digitos);
     } 
 else{
     printf("%d-%d", digitos, codigo);
 }    
     
     
 }
  

  
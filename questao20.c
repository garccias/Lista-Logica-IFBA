/* 20. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.
 */

 #include <stdio.h>

 int main() {
     
    float valor, entrada;
    int prestacao, prestacoes;
    
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);
    
    prestacao = (float) valor / 3.0;
    prestacoes = prestacao * 2;
    
    entrada = valor - prestacoes;
    
    
    printf("O valor da entrada sera de %.2f e o valor de cada prestacao sera de %d, totalizando %d as 2 prestacoes", entrada, prestacao, prestacoes);
 
 }
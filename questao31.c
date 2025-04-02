/* 31. No Futebol Americano, usa-se o Quarterback Rating como um C-ndice que indica o
desempenho do quarterback (quando maior, melhor). Ele C) calculado como indicado a
seguir: Calcula-se o percentual de passes completados em relaC'C#o aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor nC#o deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0,
respectivamente).
Em seguida, calcula-se a razC#o de jardas passadas pela quantidade de passes tentados.
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor nC#o deve ser maior que
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).
Agora, calcula-se a razC#o de passes para touchdows pelo nC:mero de passes tentados.
Divide-se o valor por 0,05. Mais uma vez, este valor nC#o deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).
EntC#o, calcula-se a razC#o entre passes interceptados e o nC:mero de passes tentados. Deste
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor nC#o
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).
O quarterback rating C) calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.
Escreva um programa, que leia o nC:mero de passes tentados, o nC:mero de passes
completos, o nC:mero de jardas passadas, o nC:mero de passes para touchdown e o nC:mero
de passes interceptados e informe o QB Rating do quarterback */

#include <stdio.h>

int main() {

	int passesT, passesC, jardas, passesTouch, passesI;
	float percentPasses, percentJardas, percentPasses2, percentPasses3, qb;
	printf("Digite os passes tentados, passes completos, jardas, passes pra touchdown e passes interceptados");
	scanf("%d %d %d %d %d", &passesT, &passesC, &jardas, &passesTouch, &passesI);



	percentPasses = (((float)passesC / passesT) - 0.3) / 0.2;

	if(percentPasses > 2.375) {
		percentPasses = 2.375;
	}
	if(percentPasses < 0) {
		percentPasses = 0;
	}
	

   percentJardas = (((float) jardas / passesT) - 3) / 4;
    
   
   if(percentJardas > 2.375){
       percentJardas = 2.375;
   }
   if(percentJardas < 0){
       percentJardas = 0;
   }


percentPasses2 = ((float) passesTouch / passesT) / 0.05;


if(percentPasses2 > 2.375){
    percentPasses2 = 2.375;
}
if(percentPasses2 < 0){
    percentPasses2 = 0;
}


percentPasses3 = (((float) passesI / passesT) - 0.095) / 0.04;

if(percentPasses3 > 2.375) {
    
    percentPasses3 = 2.375;
}
if(percentPasses3 < 0){
    percentPasses3 = 0;
}


qb = ((percentPasses + percentJardas + percentPasses2 + percentPasses3) * 100) / 6;

printf("o qb e %.2f", qb);
}
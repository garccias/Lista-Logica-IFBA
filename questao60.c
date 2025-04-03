/* 60. A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo.
Escreva um programa mostrando que a afirmação é verdadeira para todo número par
entre 500 e 1000. O programa deve imprimir o número par e os dois primos que somados
dão o número par. */

#include <stdio.h>

int main() {
    
   int numPar, primo1, primo2, i, ehPrimo;
   
   for(numPar = 500; numPar <= 1000; numPar += 2){
       
    for (primo1 = 2; primo1 < numPar; primo1++) { 
          ehPrimo = 1; // Começa assumindo que primo1 é primo
          
            for (i = 2; i * i <= primo1; i++) {
             if (primo1 % i == 0) {
                    ehPrimo = 0; // Não é primo
                    break;
                }
            }
             if (ehPrimo) { 
               primo2 = numPar - primo1;
               
                ehPrimo = 1; // Assume que primo2 é primo
                for (i = 2; i * i <= primo2; i++) {
                    if (primo2 % i == 0) {
                        ehPrimo = 0;
                        break;
                    }
                }
                 if (ehPrimo) {
                    printf("%d = %d + %d\n", numPar, primo1, primo2);
                    break; // Para a busca assim que encontra a primeira combinação
                }
            }
        }
    }


   }
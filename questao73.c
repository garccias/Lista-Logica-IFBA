/* 73. Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqC<ente).
b. A mediana dos elementos no array (elemento central)
c. A mC)dia */

#include <stdio.h>

int main() {

	int vetor[20];
	int i, j, soma = 0;
	int moda, maxRepeticoes = 0;
	int temporario, contador;
	float mediana, media;

	for (i = 0; i < 20; i++) {
		printf("Digite o %d: numero inteiro: ", i + 1);
		scanf("%d", &vetor[i]);
		soma += vetor[i];  // ja vai somando a media
	}

	for(i = 0; i < 20; i++) {
		contador = 0;

		for(j = 0; j < 20; j++) {

			if(vetor[j] == vetor[i]) {
				contador++;
			}
		}

		if (contador > maxRepeticoes) {
			maxRepeticoes = contador;
			moda = vetor[i];
		}
	}

	mediana = (vetor[10] + vetor[9]) / 2.0;  // media dos dois centrais

	media = soma / 20.0;

	printf("\nModa: %d\n", moda);
	printf("Mediana: %.2f\n", mediana);
	printf("MC)dia: %.2f\n", media);





}
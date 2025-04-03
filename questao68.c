/* 68. Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas */
#include <stdio.h>

int main() {
    float chuva[30]; // Armazena os índices pluviométricos dos 30 dias de junho
    int i, diaMaisChuva = 0, diaMenosChuva = 0;
    float maior = 0.0, menor = 99999.0; // Valores iniciais altos e baixos para comparação
    float soma1 = 0.0, soma2 = 0.0, media1, media2;

    // Leitura dos índices pluviométricos
    printf("Digite o índice pluviométrico (mm) de cada dia de junho:\n");
    for (i = 0; i < 30; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &chuva[i]);

        // Identificar o dia de maior chuva
        if (chuva[i] > maior) {
            maior = chuva[i];
            diaMaisChuva = i + 1;
        }

        // Identificar o dia de menor chuva
        if (chuva[i] < menor) {
            menor = chuva[i];
            diaMenosChuva = i + 1;
        }

        // Somar os índices para calcular as médias
        if (i < 15) {
            soma1 += chuva[i]; // Primeira quinzena (dias 1 a 15)
        } else {
            soma2 += chuva[i]; // Segunda quinzena (dias 16 a 30)
        }
    }

    // Cálculo das médias
    media1 = soma1 / 15.0;
    media2 = soma2 / 15.0;

    // Exibir os resultados
    printf("\nDia com maior chuva: Dia %d (%.2f mm)\n", diaMaisChuva, maior);
    printf("Dia com menor chuva: Dia %d (%.2f mm)\n", diaMenosChuva, menor);
    printf("Média pluviométrica da primeira quinzena: %.2f mm\n", media1);
    printf("Média pluviométrica da segunda quinzena: %.2f mm\n", media2);

}
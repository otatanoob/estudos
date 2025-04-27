/*
Uma empresa contratou 5 funcionarios temporários. De acordo com o valor
das vendas mensais, os funcionários adquirem pontos que determinarão
seus salários ao final de cada mês. Sabe-se que estes funcionários
trabalharão de novembro a janeiro do ano subsequente:
Faça um programa que:
a) Leia as pontuações nos três meses de cada funcionário;
b) Calcule e mostre a pontuação geral de cada funcionário nos três meses;
c) Calcule e mostre a média das pontuações de cada funcionários nos
três meses;
d) Determine e mostre a maior pontuação atingida entre todos os
funcionários nos três meses.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int funcionarios = 5, meses = 3;
    int pontuacoes[funcionarios][meses];
    int i, j;
    int soma, maiorPontuacao = 0;

    // a) Ler pontuações
    for (i = 0; i < funcionarios; i++) {
        printf("Funcionário %d:\n", i + 1);
        for (j = 0; j < meses; j++) {
            switch(j) {
                case 0: printf("  Novembro: "); break;
                case 1: printf("  Dezembro: "); break;
                case 2: printf("  Janeiro: "); break;
            }
            scanf("%d", &pontuacoes[i][j]);

            // d) Determinar a maior pontuação individual
            if (pontuacoes[i][j] > maiorPontuacao) {
                maiorPontuacao = pontuacoes[i][j];
            }
        }
    }

    printf("\nResumo das pontuações:\n");

    // b) e c) Soma e média por funcionário
    for (i = 0; i < funcionarios; i++) {
        soma = 0;
        for (j = 0; j < meses; j++) {
            soma += pontuacoes[i][j];
        }
        float media = soma / (float)meses;
        printf("Funcionário %d - Pontuação total: %d, Média: %.2f\n", i + 1, soma, media);
    }

    // d) Maior pontuação de todas
    printf("\nMaior pontuação individual entre todos os funcionários: %d\n", maiorPontuacao);

    return 0;
}


/*
Um funcionário de uma empresa recebe aumento salarial anualmente.
Sabe-se que:
a) Esse funcionário foi contratado em 2015, com um determinado salário inicial;
b) Em 2016 recebeu aumento de 0,5% sobre o salário inicial;
c) A partir de 2017 (inclusive), os aumentos salariais sempre corresponderam
a 50% a mais do percentual anterior.
Faça um programa que determine o salário atual desse funcionário.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salarioInicial, percentual=0.005, salarioAtual;
	int ano, anoAtual;
	
	printf("Qual o seu salário em 2015?");
	scanf("%f",&salarioInicial);
	
	printf("Em que anos estamos?");
	scanf("%d",&anoAtual);
	
	salarioAtual = salarioInicial;
	
	for(ano = 2016; ano <= anoAtual; ano++)
	{
		salarioAtual += salarioAtual * percentual;
		percentual *= 1.5;
	}
	
	printf("O seu salário atual é: %.2f; \n", salarioAtual);
	system("pause");
	return 0;
}
	
	
	
	

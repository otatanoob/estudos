/*
Faça um programa que receba um numero inteiro maior que 1 e
verifique se o numero fornecido é primo ou não. Se o numero
for primo, mostre o numero e a mensagem "Numero Primo", caso
contrário, "Número não é Primo".
Obs: Um numero é primo quando é divisivel apenas por um e por ele mesmo.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero, count=0, i=1;;
	
	
	printf("Escreva um número maior que 1: ");
	scanf("%d", &numero);
	
	if(numero>1)
	{
		for (i ; i<=numero; i++)
		{
			if(i % 2 == 0)
			{
				count++;
			}
		}
		if(count <= 2)
		{
			printf("Numero Primo\n");
		}
		else
		{
			printf("Número não é Primo\n");
		}
	}else
	{
		printf("Número inválido\n");
	}
	
	return 0;
}

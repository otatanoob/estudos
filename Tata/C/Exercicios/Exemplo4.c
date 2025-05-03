/*
Faça um programa que receba dois numeros. Calcule e mostre:
a) Caso os números formem um intervalo crescente, calcule a média dos
   numeros do intervalo, incluindo os numeros digitados;
b) Caso os números formem um intervalo decrescente, calcule a soma
   dos numeros pares, incluindo os numeros digitados;
c) Se os números forem iguais, mostre uma mensagem informando essa condição.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2, soma, i=0, count=0;
	float media;
	
	printf("Escreva o número: ");
	scanf("%d",&numero1);
	printf("\nEscreva o número: ");
	scanf("%d",&numero2);
	
	i=numero1;
	
	if(numero1 == numero2)
	{
		printf("São números iguais\n");
	}
	else if(numero1<numero2)
	{
		for(i; i <= numero2; i++)
		{
			soma+= i;
			count++;	
		}	
		media = (float)soma / count;
		printf("A media é: %f\n", media);
	}
	else
	{
		for(i ; i>=numero2 ; i--)
		{
			if(i % 2 == 0)
			{
				soma+= i;
			}
		}
		printf("A soma fica: %d\n", soma);
	}
	
	system("pause");
	return 0;
}

	

/*
Faça um programa que leia um número N que indica quantos valores 
inteiros e positivos devem ser lidos a seguir. 
Para cada número lido, mostre uma tabela contendo o valor lido 
e o fatorial desse valor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;

	
	printf("Escreva o número: ");
	scanf("%d",&numero);
	
	for(numero; numero>=1; numero--)
	{
		printf("%d * ",numero);
	}
	return 0;
}

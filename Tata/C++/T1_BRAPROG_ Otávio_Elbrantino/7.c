/*Faça um programa que leia um número N que indica quantos valores inteiros e positivos
devem ser lidos a seguir. Para cada número lido, mostre o valor lido e o fatorial desse valor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num, i, j=1, quantos, valor=1;
	
	
	printf("Quantos fatoriais você deseja ver?: ");
	scanf("%d", &quantos);
	
	for(quantos ; quantos>=1; quantos--)
	{
		printf("\nDigite o %dº fatorial: ",j);
		scanf("%d", &num);
		j++;
		valor=1;
		for(num; num>=1; num--)
		{
			printf(" %d ",num);
			if(num!=1)
			{
				printf("x",num);
			}
			valor*=num;
		}
		
		printf("\nCom um resultado de: %d\n",valor);
		printf("\n---------------------------------\n");
	}
	return 0;
}

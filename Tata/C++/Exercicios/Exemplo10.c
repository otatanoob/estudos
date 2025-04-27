/*
 * Crie um programa para ler N números até que a soma dos números seja
 * maior ou igual a 100. Apresente a quantidade de números necessários
 * para alcançar a soma maior ou igual a 100.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int num, soma, i=1;
	
	printf("Escreva um número para somar: ");
	scanf("%d", &num);
	
	soma=num;
	
	while(soma<100)
	{
		
		printf("Escreva um número para somar: ");
		scanf("%d", &num);
		
		i++;
		soma+= num;
	}
	
	
	printf("O totoal de números foi %d ",i);
	printf("\nE a soma foi %d", soma);
	
	return 0;
}
	
	
	

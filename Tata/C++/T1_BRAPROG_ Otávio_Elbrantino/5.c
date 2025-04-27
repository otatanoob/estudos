/*Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado.
Verifique a possibilidade de opção inválida e não se preocupe com restrições, como salário
negativo*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, imposto;
	float aumento;
	int menu;
	
	do
	{
	printf("1.Imposto");
	printf("\n2.Novo Salário");
	printf("\n3.Classificação\n");
	printf("\nDigite a opção desejada:");
	scanf("%d", &menu); 
	if(menu<1 || menu>3)
	{
		printf("Inválido\n\n");
	}
	}while(menu<1 || menu>3);

	


	switch(menu)
	{
		case 1:
			printf("\nDigite o seu salário: ");
			scanf("%f",&salario);
			if(salario<500)
			{
				imposto = salario * 0.05;
				printf("O percentual do imposto é de 5%% totalizando: %.2f",imposto);
			}
			else if( salario >= 500.0 && salario<=850.0)
			{
				imposto = salario * 0.1;
				printf("O percentual do imposto é de 10%% totalizando: %.2f",imposto);
			}
			else if( salario > 850)
			{
				imposto = salario * 0.15;
				printf("O percentual do imposto é de 15%% totalizando: %.2f",imposto);
			}
			break;
		case 2:
			printf("\nDigite o seu salário: ");
			scanf("%f",&salario);
			
			if(salario>1500)
			{
				aumento = salario + 25;
				printf("O novo salário com um aumento de R$25 ficam: %f", aumento);
			}
			else if(salario<=1500 && salario>=750)
			{					aumento = salario + 50;
				printf("O novo salário com um aumento de R$50 ficam: %f", aumento);
			}
			else if(salario<750 && salario>=450)				{
				aumento = salario + 75;
				printf("O novo salário com um aumento de R$75 ficam: %f", aumento);
			}
			else if(salario<450)
			{
				aumento = salario + 100;
				printf("O novo salário com um aumento de R$100 ficam: %f", aumento);
			}
		
			break;
		case 3:
			printf("\nDigite o seu salário: ");
			scanf("%f",&salario);
			
			if(salario<=700)
			{
				printf("Mal remunerado");
			}
			if(salario>700)
			{
				printf("Bem remunerado");
			}
			break;			
	}
	return 0;
}


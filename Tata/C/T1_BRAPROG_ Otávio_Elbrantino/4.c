/*Faça um programa que receba o código correspondente ao cargo de um funcionário e seu
salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na
tabela a seguir.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, salarioFinal, aumento;
	int cod;
	printf("Qual o seu salário atual? :");
	scanf("%f", &salario);
	
	printf("Qual o código de seu cargo? :");
	scanf("%d", &cod);
	
	switch(cod)
	{
		case 1:
			aumento = salario * 0.50;
			salarioFinal = salario + aumento;
			printf("\nEscrituário");
			printf("\nO aumento é de 50%%, totalizando: R$%.2f", aumento);
			printf("\nO salario final fica: %.2f",salarioFinal);
			break;
		
		case 2:
			aumento = salario * 0.35;
			salarioFinal = salario + aumento;
			printf("\nSecretário");
			printf("\nO aumento é de 35%%, totalizando: R$%.2f", aumento);
			printf("\nO salário final fica: %.2f",salarioFinal);
			break;
		
		case 3:
			aumento = salario * 0.20;
			salarioFinal = salario + aumento;
			printf("\nCaixa");
			printf("\nO aumento é de 20%%, totalizando: R$%.2f", aumento);
			printf("\nO salario final fica: %.2f",salarioFinal);
			break;
		
		case 4:
			aumento = salario * 0.10;
			salarioFinal = salario + aumento;
			printf("\nGerente");
			printf("\nO aumento é de 10%%, totalizando: R$%.2f", aumento);
			printf("\nO salario final fica: %.2f",salarioFinal);
			break;
		
		case 5:
			aumento = salario * 0.0;
			salarioFinal = salario + aumento;
			printf("\nDiretor");
			printf("\nO diretor não posssui aumento");
			printf("\nO salario final fica: %.2f",salarioFinal);
			break;
		
	}
	
	
}

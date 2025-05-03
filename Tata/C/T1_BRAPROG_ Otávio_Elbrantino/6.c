/*6) Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo
salário, acrescido de bonificação e de auxílio escola.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario, bonificacao, aux;
	
	printf("Escreva seu salário: ");
	scanf("%f", &salario);
	
	if(salario<500){
		bonificacao=0.05 * salario;
	} 
	else if(salario>=500 && salario<=1200){
		bonificacao=0.12 * salario;
	}
	else if(salario>1200){
		bonificacao=0;
	}
	
	if(salario<=600){
		aux= 150;
	}
	else if(salario>600){
		aux= 100;
	}
	salario+= bonificacao + aux;
	
	printf("A bonificação é: %.2f\n", bonificacao);
	printf("O auxílio escola é : %.2f\n", aux);
	printf("O salário final é: %.2f",salario);
	return 0;
}

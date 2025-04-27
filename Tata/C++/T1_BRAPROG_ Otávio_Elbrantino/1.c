/*
Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador
emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação
bancária de retirada paga imposto de 0,38% por cheque e o saldo inicial da conta está
zerado
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, cheque1, cheque2;
	
	printf("Qual foi o valor do salário depositado?: ");
	scanf("%f", &salario);
	
	printf("Qual foi o valor do primeiro cheque: ");
	scanf("%f", &cheque1);
	
	printf("Qual foi o valor do segundo cheque: ");
	scanf("%f", &cheque2);
	
	cheque1 = cheque1 * 1.0038;
	cheque2 = cheque2 * 1.0038;
	
	salario -= cheque1;
	salario -= cheque2;
	
	printf("\nSeu saldo atual é: R$%.2f ", salario);
	
	return 0;
}

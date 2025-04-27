/*9) Uma empresa possui dez funcionários com as seguintes características: código, número de
horas trabalhadas no mês, turno de trabalho (M — matutino; V — vespertino; ou N —
noturno), categoria (O — operário; ou G — gerente), valor da hora trabalhada. Sabendo-se
que essa empresa deseja informatizar sua folha de pagamento, faça um programa que:
a) Leia as informações dos funcionários, exceto o valor da hora trabalhada, não permitindo que
sejam informados turnos e nem categorias inexistentes. Trabalhe sempre com a digitação
de letras maiúsculas.
b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00
para o salário mínimo.
c) Calcule o salário inicial dos funcionários com base no valor da hora trabalhada e no número
de horas trabalhadas.
d) Calcule o valor do auxílio alimentação recebido pelo funcionário de acordo com seu salário
inicial, conforme a tabela a seguir.
e) Mostre o código, número de horas trabalhadas, valor da hora trabalhada, salário inicial, auxílio
alimentação e salário final (salário inicial + auxílio alimentação).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i=1, cod;
	float salario, horas, valorHora, salarioFinal, aux;
	const float salarioMinimo = 450.0;
	char categoria, turno;
	
	for(i; i<=10; i++){
		printf("\nQual o código?: ");
		scanf("%d", &cod);
			
		do{
			printf("\nQual a categoria?(O — operário; ou G — gerente): ");
			scanf( " %c", &categoria);
			
			if (categoria != 'O' && categoria != 'G') {
                printf("Categoria inválida, tente novamente.\n");
            }
            
		}while(categoria!='O' && categoria!='G');
		
		do{
			printf("\nQual o turno:(M — matutino; V — vespertino; ou N — noturno):");
			scanf(" %c", &turno);
			
			if (turno != 'M' && turno != 'V' && turno != 'N') {
                printf("Turno inválido, tente novamente.\n");
            }
		}while(turno!='M' && turno!='V' && turno!='N');
		
		do{
			printf("\nQuantidade de horas trabalhadas: ");
			scanf("%f", &horas);
		}while(horas<=0);
		
	
		if(categoria=='G' && turno== 'N'){
			valorHora= salarioMinimo * 0.18;
		}
		else if(categoria=='G' && (turno== 'M' || turno== 'V')){
			valorHora= salarioMinimo * 0.15;
		}
		else if(categoria=='O' && turno== 'N'){
			valorHora= salarioMinimo * 0.13;
		}
		else if(categoria=='O' && (turno== 'M' || turno== 'V')){
			valorHora= salarioMinimo * 0.10;
		}
		
		salario = horas * valorHora;
		
		if(salario<300){
			aux = salario * 0.20;
		}
		else if(salario>=300 && salario<=600){
			aux = salario * 0.15;
		}
		else if(salario>600){
			aux = salario * 0.05;
		}
		
		salarioFinal = salario + aux;
		
		printf("\nO código do trabalhador é: %d", cod);
		printf("\nNúmero de horas trabalhadas foi: %.2f", horas);
		printf("\nValor da hora trabalhada: %.2f",valorHora);
		printf("\nSalário inicial: %.2f",salario);
		printf("\nAuxílio alimentação: %.2f", aux);
		printf("\nSalário final: %.2f\n",salarioFinal);
		printf("\n------------------------\n");	
	}
	return 0;
}

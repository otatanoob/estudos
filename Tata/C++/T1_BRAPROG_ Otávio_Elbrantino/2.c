/*Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais
fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada
gato é sempre a mesma. Faça um programa que receba o peso do saco de ração e a
quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no
saco após cinco dias.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float peso, racaoDiaria, i=1;
	
	printf("Qual o peso em Kg do saco de ração?: ");
	scanf("%f", &peso);
	
	printf("Qual a quantidade de ração dada a cada gato diariamente em gramas?: ");
	scanf("%f", &racaoDiaria);
	
	peso*= 1000;
	racaoDiaria*=2;
	
	for(i; i<=5; i++)
	{
		peso -= racaoDiaria;
	}
	
	peso /= 1000;
	
	printf("\nA ração restante daqui 5 dias sera: %.2f Kg \n", peso);
	
	system("pause");
	return 0;
	
 } 

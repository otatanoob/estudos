/*Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e
a altura que o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus
ele deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário. Todas
as medidas fornecidas devem estar em metros.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float escada, degrau;
	int total;
	
	printf("Quantos metros de altura deseja subir?: ");
	scanf("%f", &escada);
	
	printf("Qual é o tamanho da altura dos degraus em metros?: ");
	scanf("%f", &degrau);
	 
	for( total=0; escada>0; total++)
	{
		escada -= degrau;
	}
	
	
	printf("\n.O total de degraus necessários são: %d", total);
	
	return 0;
}

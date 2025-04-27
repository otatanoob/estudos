/*
 * Crie um programa para ler o nome e a velocidade da volta de N pilotos
 * em uma pista de kart. Ao final do programa, você deve apresentar o nome
 * do piloto com a volta mais rápida e o nome do piloto com a volta mais 
 * lenta e a média das voltas de todos os pilotos.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	char piloto[30], pilotoRapido[30], pilotoLento[30];
	float vel=0.0, voltaRapida, voltaLenta, mediaVoltas, velocidadeTotalVoltas;
	int numVoltas=0;
	char resp= 'S';
	numVoltas=1;
	velocidadeTotalVoltas = 0.0;
	voltaLenta= 0.0;
	voltaRapida= 0.0;
	
	do
	{
		printf("\nDigite o nome do piloto: ");
		scanf(" %[^\n]", piloto); //Leia os caracteres até econtrar ENTER
		
		printf("\nDigite a velocidade da volta do piloto %s: ", piloto);
		scanf("%f", &vel);
		
		if (numVoltas==1)
		{
			voltaRapida = vel;
			strcpy(pilotoRapido, piloto);
			
			voltaLenta = vel;
			strcpy(pilotoLento, piloto);
		}
		if(voltaRapida < vel)
		{
			voltaRapida = vel;
			strcpy(pilotoRapido, piloto);
		}
		if(voltaLenta > vel)
		{
			voltaLenta = vel;
			strcpy(pilotoLento, piloto);
		}
		numVoltas++;
		velocidadeTotalVoltas+= vel;
		
		printf("\nDeseja adicionar mais um piloto? (S/N): ");
		scanf(" %c", &resp);
		
	}while (resp == 'S' || resp =='s');
	
	mediaVoltas = velocidadeTotalVoltas / (numVoltas-1); 
	
	printf("\nNome do piloto com a volta mais rápida: %s ", pilotoRapido);
	printf("\nVolta mais rápida em (Km/h); %f", voltaRapida);
	printf("\nNome do piloto com a volta mais lenta: %s ", pilotoLento);
	printf("\nVolta mais rápida em (Km/h); %f", voltaLenta);
	printf("\nMédia das voltas de todos os pilotos: %.2f hm/h ", mediaVoltas);
	
	
	
	system("pause");
	return 0;	
}

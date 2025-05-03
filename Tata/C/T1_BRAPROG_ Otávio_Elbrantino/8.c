/*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de
trânsito. Foram obtidos os seguintes dados.
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de
passeio. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int numCarros[5], numAcidentes[5], i=0, maiorIndice = 0, menorIndice = 0, j=0, k=0;
	float media = 0, mediaMenos = 0;
	
	printf("1.Bragança Paulista \n2.Campinas \n3.Vargem \n4.Atibaia \n5.Piracaia\n");
	
	for(i = 0; i <= 4; i++)
	{
		printf("\nEscreva a quantidade de veículos da %dª cidade: ", i+1);
		scanf("%d", &numCarros[i]);
		
		printf("Escreva a quantidade de acidentes com vítimas da %dª cidade: ", i+1);
		scanf("%d", &numAcidentes[i]);
		
		if(numAcidentes[i] > numAcidentes[maiorIndice])
		{
			maiorIndice = i;
		}
		if(numAcidentes[i] < numAcidentes[menorIndice])
		{
			menorIndice = i;
		}
	}
	
	printf("\nA cidade com o maior índice de acidentes é a %dª (%d acidentes)\n", maiorIndice + 1, numAcidentes[maiorIndice]);
	printf("A cidade com o menor índice de acidentes é a %dª (%d acidentes)\n", menorIndice + 1, numAcidentes[menorIndice]);
	
	for(j = 0; j <= 4; j++)
	{
		media += numCarros[j];
		
		if(numCarros[j] < 2000)
		{
			mediaMenos += numAcidentes[j];
			k++;
		}
	}
	
	media = media / 5;
	
	if(k > 0)
	{
		mediaMenos = mediaMenos / k;
	}
	else
	{
		mediaMenos = 0;
	}
	
	printf("\nA média de veículos nas cinco cidades juntas é: %.2f\n", media);
	printf("A média de acidentes de trânsito nas cidades com menos de 2.000 veículos é: %.2f\n", mediaMenos);
	
	return 0;
}


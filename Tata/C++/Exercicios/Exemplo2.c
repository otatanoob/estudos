/*
Um cinema cobra preços diferentes para os ingressos de acordo com a idade
de uma pessoa. Se uma pessoa tiver menos de 5 anos de idade, o ingresso
será gratuito, se tiver entre 5 e 12 anos, o ingresso custará 12 reais,
se tiver acima de 12 anos, custará 24 reais.
Faça um programa com um laço que pergunte a idade dos usuários, e informe
os preços do ingresso e o valor total. 
O programa será interrompido quando a idade digitada for zero.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade, total;
	idade=1;
	total=0;

	while(idade!=0)
	{
		printf("\nQual a sua idade?");
		scanf("%d", &idade);
		if (idade<5)
		{
			printf("\nO valor do ingressso é 0 Reais");
			total= total+0;
		}
		else if(idade<12)
		{
			printf("\nO valor do ingressso é 12 Reais");
			total= total+12;
		}
		else if(idade>=12)
		{
			printf("\nO valor do ingressso é 24 Reais");
			total= total+24;
		}				
	}
	
	printf("\nO total ficou %d\n",total);
	system("pause");
	return 0;
}
	
	

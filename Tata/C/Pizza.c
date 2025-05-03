/*
Este programa solicita ao usuário que forneça uma serie de ingredientes para uma pizza até que o valor 0 seja digitado para encerrar o programa.
À medida em que cada ingrediente seja incluído, forneça uma mensagem informando que este ingrediente será acrescentado à pizza.
Ao final, mostre a lista de ingredientes incluídos na pizza.
*/
/*Para trabalhar com string é necessario usar vetor de char -> y[capacidade] - normalmente se usa o for para marcar as posições
Ex: int y[5]; -> y[0]=53; y[1]=27; y[2]=32; y[3]=14; y[4]=9; -> 53|27|32|14|9
Ex: char y[5]; -> y[0]=A; y[1]=n; y[2]=d; y[3]=r; y[4]=e; -> A|n|d|r|e*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char ingrediente[50], pizza[50], lista[100];
	int valor = 1, i = 0; //i de índice para trabalhar com os [espaços]
	printf("\nEntre com o nome da pizza: ");
	//scanf("%s", &pizza); está errado
	gets(pizza); //gets() só funciona para string
	while (valor != 0)
	{
		fflush(stdin); 
		//fflush limpa buffer do teclado para que o comando gets a seguir, não pule para a próxima linha.
		//O comando fflush(stdin) limpa o buffer que está armazenado no nome da pizza no comando gets.
		//Se não for feito impede a realização do strcat e, consequentemente o primeiro ingrediente.
		printf("\nEntre com o %dº ingrediente da pizza: ", i + 1);
		gets(ingrediente);
		strcat(lista, "\n- "); //concatenar string
		strcat(lista, ingrediente);
		i++;
		printf("\nDeseja incluir mais um ingrediente? (1 - Sim, 0 - Não) ");
		scanf("%d", &valor);
	}
	printf("\nLista de ingredientes:%s\n", lista);
	//O P!!À é lixo de memória que para limpar é necessário outro comando com sintaxe maior e mais complexa
	system("pause");
	return 0;
}

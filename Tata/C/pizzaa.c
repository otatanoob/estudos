/*
Este programa solicita ao usuário que fornceça uma série de ingredientes 
para uma pizza até que o valor seja 0, para encerrar o programa.
À medida que cada ingrediente seja incluído, forneça uma 
mensagem informando que este ingredinete sera acrescentado a pizza. 
Ao final, mostre uma lita de ingredientes incluídos na pizza.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	char ingrediente[50], pizza [50], lista[500] ="";
	int valor = 1, i = 0;
	printf("\nEntre com o nome da pizza: ");
	gets(pizza);
	while (valor !=0)
	{
		//fflush limpa o buffer do teclado para que o comando
		//gets a seguir, não pule para a próxima linha
		//O comando fflush stdin limpa o buffer que está
		//armazenado o nome da pizza.
		printf("\nEntre com o %dº ingrediente da Pizza: ", i + 1);
		gets(ingrediente);
		strcat(lista, " - ");
		strcat(lista, ingrediente);
		
		i++;
		
		printf("\nDeseja incluir mais um ingrediente?(1 - Sim, 0 - Não)\n");
		scanf(" %d", &valor);
	}
	printf("\nLista de Ingrediente: %s", lista);
	system("pause");
	return 0;
}

/*
 * Escreva um programa que apresente a série de Fibonacci até um certo número de termos. 
 * no exemplo a seguir a sequencia de fibonacci possui 9 termos.
 * A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34... etc.
 * Faça um programa que entre com o número de termos e mostre a sequencia de
 * fibonacci com a quantidade de termos fornecidos
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL, "Portuguese");
   int n1=0, n2=1, i=1, nTermos, f=2;
   
   printf("Qual a quantidade de termos que você deseja? ");
   scanf("%d", &nTermos);
   
   printf("%d ", i);
   
   for(f; f<=nTermos; f++)
   {
   	
   	i= n1+n2;
   	
   	printf("- %d ", i);

   	n1= n2;
   	n2=i;
   }
   
   return 0;
}

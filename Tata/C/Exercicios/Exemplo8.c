/* Num posto de radar passam N veículos em uma estrada.
 Faça um programa para entrar com a velocidade de N veículos 
 e multá-los quando a velocidade for maior que 100 km/h. 
 No final do programa deve-se apresentar o total de veículos que 
 passaram pelo radar e a quantidade de veículos multados.
 Para cada veículo multado, informe o valor da multa a ser pago,
 conforme tabela a seguir:
 Velocidade (km/h)		Multa (R$)
 101 a 110				140,00
 111 a 120				180,00
 120 a 130				230,00
 Acima 130				340,00
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
   int velocidade, n=0, multa=0, valor=0, nMultados;
   
   do{
   	printf("\nQual a velocidade do veículo?: ");
   	scanf("%d", &velocidade);
   	
   	valor=0;
   	
   	if(velocidade<=100)
	   {
   			printf("Não há multa ");
	   }
   	else if(velocidade>=101 && velocidade<=110)
	   {
   			valor=140;
	   }
	else if(velocidade>=111 && velocidade<=120)
		{
	   		valor=180;
	   }
	else if(velocidade>=121 && velocidade<=130)
		{
	   		valor= 230;
	   }
	else if(velocidade>130)
		{
	   		valor=340;
	   }
	
	   
	if(valor!=0){
		nMultados++;
	}
   	
   	if(velocidade!=0){
   		n++;
	   }
   	
	if(velocidade>=101){
	printf("O valor da multa é: %d ",valor);
	}
	
   }while(velocidade!=0);
   
   printf("\nO total de veículo registrados é: %d ",n);
   printf("\nO total de veículos multados é: %d ", nMultados);
   
   
   return 0;
}

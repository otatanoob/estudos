/*
 * Monte um programa que leia N números, 
 * até que seja digitado um número <=0. 
 * Apresente para cada número se ele é primo ou não.

 */

programa
{
	
	funcao inicio()
	{
		inteiro numero=1, divisores, contador

		enquanto(numero > 0){
			
			escreva("\nDigite o número: ")
			leia(numero)
			
			se(numero>=0){
				divisores = 0
				contador = 2
				enquanto (contador < numero){
					se (numero % contador == 0){
						divisores = divisores + 1 
					}	
					contador = contador + 1
				}

				se (divisores == 0){
					escreva("Número ",numero, " é primo!\n")
				}senao{
					escreva("Número ",numero, " não é primo!\n")
				}
			}
		}	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 649; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
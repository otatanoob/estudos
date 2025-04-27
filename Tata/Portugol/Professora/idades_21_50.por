/*
 *Escreva um algoritmo que receba a idade de várias pessoas e 
 *pare a execução com a entrada de um número não positivo. 
 *O algoritmo deve imprimir:	
	- O total de pessoas com menos de 21 anos;
	- O total de pessoas com mais de 50 anos.
 
 */

programa
{
	
	funcao inicio()
	{
		inteiro idade, totalMenos21=0, totalMais50=0
		
		faca{
			escreva("Digite a idade: ")
			leia(idade)

			se(idade < 21){
				totalMenos21 = totalMenos21 + 1
			}senao{
				se (idade > 50){
					totalMais50 = totalMais50 + 1 
				}
			}
			
		}enquanto(idade > 0)

		escreva("\nTotal menos de 21: ",totalMenos21)
		escreva("\nTotal mais de 50: ",totalMais50)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 616; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
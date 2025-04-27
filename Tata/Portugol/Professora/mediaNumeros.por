/*
 * Entrar com N números até que seja digitado 
 * um número <= 0. Apresente a quantidade de 
 * números digitados e a médias deles.

 */

programa
{
	
	funcao inicio()
	{
		real numero=1, qtdeNumeros=0, soma=0
		real media

		enquanto(numero > 0){
			escreva("Digite o número: ")
			leia(numero)
			se(numero>=0){
				soma = soma + numero
				qtdeNumeros = qtdeNumeros + 1
			}
		}
		media = soma/qtdeNumeros
		escreva("Quantidade de números: ", qtdeNumeros)
		escreva("\nMedia: ", media)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 180; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
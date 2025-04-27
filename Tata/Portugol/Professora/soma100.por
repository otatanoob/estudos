/*
 * Elabore um algoritmo que leia números até que o valor da soma 
 * destes números seja >=100. O algoritmo deverá fornecer 
 * ao final a quantidade de valores.
 */

programa
{
	
	funcao inicio()
	{
		inteiro numero, soma=0, qtde=0

		faca{
			escreva("Digite um número: ")
			leia(numero)	

			soma = soma + numero
			qtde = qtde + 1
			
		}enquanto(soma < 100)

		escreva("Quantidade de números: ", qtde)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 298; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
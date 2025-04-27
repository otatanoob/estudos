/*
 * Crie um algoritmo para ler a altura de N atletas diferentes. 
 * Apresente a média das alturasp e a quantidade de atletas com 
 * altura superior a 1.5 metros.
 */

programa
{
	
	funcao inicio()
	{
		real altura, soma=0
		inteiro qtdeSuperior=0, qtdeTotal=0

		faca{
			escreva("Digite a altura: ")
			leia(altura)

			soma = soma + altura

			se(altura > 1.5){
				qtdeSuperior = qtdeSuperior + 1
			}
			
			qtdeTotal = qtdeTotal + 1 
			
		}enquanto(altura > 0)

		escreva("Média das aluras: ", soma/qtdeTotal)
		escreva("\nAtletas com altura acima de 1.5: ",qtdeSuperior)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 538; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
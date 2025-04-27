/*
 * Crie um algoritmo que leia uma sequência de números 
 * (até que seja digitado 0). Imprima somente o número que for 
 * múltiplo de sua posição na sequência digitada. 
 * O programa só pode aceitar números positivos. Exemplo:
	Números digitados  13    9    21   16   17
          Posição:       1    2     3    4     5

 */
programa
{
	
	funcao inicio()
	{
		inteiro numero, posicao = 1

		faca{
			escreva("Digite um número: ")
			leia(numero)

			se(numero > 0 e numero % posicao == 0){
				escreva(numero, " ", posicao, "\n")
			}		
			
			posicao = posicao + 1 
		}enquanto(numero!=0)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 477; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
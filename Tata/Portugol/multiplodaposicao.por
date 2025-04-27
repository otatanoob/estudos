programa
{
	
	funcao inicio()
	{
		inteiro numero, posicao
		posicao=1
		
		faca{
			escreva("\nDigite um numero positivo: ")
			leia(numero)
			
			se(numero%posicao==0 e numero!=0 e numero>0){
				escreva("Numero ",numero, " posição ",posicao)
			}
			se(numero<0){
				escreva("\nParabéns você escreveu um numero negativo!!!\n")
				pare
			}
			
		
		posicao++
		}enquanto(numero!=0)

		escreva("\nAté mais\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 416; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
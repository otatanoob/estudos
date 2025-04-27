programa
{
	
	funcao inicio()
	{
		inteiro pao, queijo, bisnaga, paoForma, leite, paoDoce, suspiro
		real valor, desconto, total
		
		escreva("\nQtd de pães:  ")
		leia(pao)


		escreva("\nQtd de queijos:  ")
		leia(queijo)


		escreva("\nQtd de bisnagas:  ")
		leia(bisnaga)


		escreva("\nQtd de pães de forma:  ")
		leia(paoForma)


		escreva("\nQtd de leite:  ")
		leia(leite)


		escreva("\nQtd de pães doces:  ")
		leia(paoDoce)

		escreva("\nQtd de suspiros:  ")
		leia(suspiro)

		escreva("Qual foi o valor total das compras:  ")
		leia(valor) 


		se (bisnaga>0 e paoForma>0){
			desconto=0.85
		}
		senao se (pao>=10 e queijo>0){
			desconto=0.90
		}
		senao se (leite>0 e paoDoce>0 ou bisnaga>0){
			desconto=0.95
		}
		senao{
			desconto=1
		}

		total= valor * desconto

		escreva("\nO total ficou: ", total)
		
		
		

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 797; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
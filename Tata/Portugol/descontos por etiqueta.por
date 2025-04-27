programa
{
	
	funcao inicio()
	{
		inteiro pagamento
		real preco, desconto, valorfinal
		escreva("Qual o preço do pedido:  ")
		leia (preco)

		escreva("\nQual será a forma de pagamento?")
		escreva("\n1.À vista em dinheiro ou cheque, recebe 10% de desconto")			
		escreva("\n2.À vista no cartão de crédito, recebe 15% de desconto")			
		escreva("\n3.Em duas vezes, preço normal de etiqueta sem juros")			
		escreva("\n4.Em duas vezes, preço normal de etiqueta mais juros de 10%:  ")
		leia(pagamento)

		
		escolha (pagamento)
			{
				caso 1:
					desconto = 0.90
					pare
				caso 2: 
					desconto = 0.85
					pare
				caso 3:
					desconto = 1.0
					pare
				caso 4:
					desconto = 1.10
					pare
				caso contrario:
					desconto = 0
					escreva("Inváilido")
			}
		valorfinal= preco * desconto

		limpa()
		escreva("O valor final fica: ",valorfinal)
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 816; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
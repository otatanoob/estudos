programa
{
	
	funcao inicio()
	{
		real valor,valorDesconto, valorFinal, desconto

		escreva("Qual foi o preço de seu pedido?: ")
		leia(valor)

		desconto= 0.0
		
		se (valor<100)
		{
			desconto = 1
		}
		senao se (valor>=100 e valor<200)
		{
			desconto = 0.95
		}
		senao se (valor>=200)
		{
			desconto = 0.90 
		}

		valorFinal = valor * desconto
		valorDesconto = valor - valor * desconto

		escreva("\nValor total: ", valor)
		escreva("\nValor do desconto: ", valorDesconto)
		escreva("\nValor a ser pago pelo cliente: ", valorFinal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 502; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
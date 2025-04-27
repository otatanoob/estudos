programa
{
	
	funcao inicio()
	{
		inteiro lado1, lado2, lado3
		 
		escreva("Escreva o primeiro lado: ")
		leia(lado1)
		escreva("Escreva o primeiro lado: ")
		leia(lado2)
		escreva("Escreva o primeiro lado: ")
		leia(lado3)

		se(lado1> lado2 + lado3 ou lado2> lado1 + lado3 ou lado3> lado1 + lado2)
		{
			escreva("\nIsso não pode ser um triângulo\n")
		}
		senao se(lado1==lado2 e lado2==lado3)
		{
			escreva("\nÉ um triângulo Equilátero\n")
		}
		senao se(lado1==lado2 ou lado1==lado3 ou lado3==lado2)
		{
			escreva("\nÉ um triângulo Isósceles\n")
		}
		senao se (lado1!=lado2 e lado2!=lado3)	
		{
			escreva("\nÉ um triângulo Escaleno\n")
		}
	}	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 352; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
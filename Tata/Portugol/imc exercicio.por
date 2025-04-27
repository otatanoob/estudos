programa
{
	
	funcao inicio()
	{
		inteiro  sexo
		real h , mulher, homem
		
		escreva("Você é homem ou mulher?: (1-Homem  2-Mulher) ")
		leia(sexo) 
		
		escreva("Qual a sua altura?: ")
		leia(h) 

		homem= (72.7*h) - 58
		mulher= (62.1*h) - 44.7
		
		se  (sexo==1)
		{
			escreva("Seu imc é:", homem)
		}
		senao se(sexo==2)
		{
			escreva("Seu imc é:", mulher)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 330; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
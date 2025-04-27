programa
{
	
	funcao inicio()
	{
		real numero, soma, media, i

		escreva("Escreva um número: ")
		leia(numero)

		soma=0
		soma= soma+numero
		i=1
		
		enquanto(numero>0)
		{
		escreva("Escreva um número: ")
		leia(numero)
		soma= soma+numero
		i++
		}
		media= soma/i

		escreva("A quantidade números digitados foi: ", i)

		escreva("\nA média desses números foi: ", media)
	}	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 44; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
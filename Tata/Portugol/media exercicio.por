programa
{
	
	funcao inicio()
	{
		real nota1, nota2, nota3, media

		escreva("Qual sua primeira nota?: ")
		leia(nota1)
		escreva("Qual sua segunda nota?: ")
		leia(nota2)
		escreva("Qual sua terceira nota?: ")
		leia(nota3)

		media = (nota1 + nota2 +nota3)/3

		se (media >= 6)
		{
			escreva(" Aprovado!\n Sua media é: ", media)
		} 
		senao se(media<6)
		{
			escreva(" Reprovado!\n Sua media é: ", media)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 312; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
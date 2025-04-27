programa
{
	
	funcao inicio()
	{
		caracter tipo
		real nota1, nota2, nota3, peso1, peso2, peso3, media
				
		escreva("Escreva sua primeira nota: ")
		leia(nota1)
		escreva("Escreva sua segunda nota: ")
		leia(nota2)
		escreva("Escreva sua terceira nota: ")
		leia(nota3)

		escreva("Suas médias são aritiméticas ou ponderadas?: (A-Aritiméticas P- Ponderadas): ")
		leia(tipo)

		media=0
		peso1=0
		peso2=0
		peso3=0



		
		se(tipo=='P' ou tipo=='p')
		{
			escreva("Escreva o peso 1: ")
			leia(peso1) 
			escreva("Escreva o peso 2: ")
			leia(peso2)
			escreva("Escreva o peso 3: ")
			leia(peso3)
		}


		se(tipo=='A' ou tipo=='a')
		{
			media = (nota1 + nota2 + nota3)/3
		}
		senao se(tipo=='P' ou tipo=='p')
		{
			media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3)
		}

		se(media>=6)
		{
			escreva("Aprovado!\n Sua média é: ", media)
		}
		senao se (media<6)
			escreva("Reprovado!\n Sua média é: ", media)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 773; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
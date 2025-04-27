programa
{
	
	funcao inicio()
	{
		inteiro cont=0, maior=0
		real altura, media, soma=0
		faca{
			escreva("Qual sua altura: ")
			leia(altura)

			se(altura>1.50){
				maior++
			}
			
			soma+=altura
			cont++
		}enquanto(altura!=0 e altura>1)
		
		media=soma/(cont-1)
		
		escreva("A média foi: ",media, "\nO total de atletas com a altura maior de 1,50 é ",maior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 375; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
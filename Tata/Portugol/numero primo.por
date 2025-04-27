programa
{
	
	funcao inicio()
	{
		inteiro numero, i, aux=0
		
		numero=1

		
		enquanto(numero!=0)
		{
			i=1
			aux=0
			
			escreva("Escreva um número: ")
			leia(numero)

			
			
			para(i; i<=numero; i++)
			{
		
				se(numero%i== 0)
				{
				aux++
				}
			}

			
			se(aux<=2)
			{
			escreva("É um número primo \n")
			} 
			senao se(aux>2)
			{
			escreva("Não é um número primo \n")
			}
			
		}
		escreva("Até mais \n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 183; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
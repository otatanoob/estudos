programa
{
	
	funcao inicio()
	{
		inteiro numero[10],i=0, aux, fim

		faca{
			escreva("Escreva um número: ")
			leia(numero[i])
			
			
			i++
			
		}enquanto(i<=9)
		

		i=0
		para(fim=9;fim>=1;fim--)
		{
			i=0
			para(i; i<fim ;i++)
			{
				se(numero[i]>numero[i+1])
				{
					aux=numero[i+1]
					numero[i+1]=numero[i]
					numero[i]=aux
				}
			}
		
		}
		i=0
		faca
		{
			escreva(" ", numero[i])
		
			i++
			
		}enquanto(i<=9)

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 195; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
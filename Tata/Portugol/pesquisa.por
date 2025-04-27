programa
{
	
	funcao inicio()
	{
		inteiro numero[10], i=0, pesquisa, aux=0, j=0

		enquanto(i<=9){
			escreva("Escreva o ",i+1,"º numero:")
			leia(numero[i])
			i++
		}
		escreva("Qual numero deseja pesquisar?: ")
			leia(pesquisa)


		
		i=0
		faca{
			se(pesquisa==numero[i]){
				aux=pesquisa
				j=i
			}
			i++
		}enquanto(aux!=pesquisa)

		escreva("\nO numero esta no index:",j," e foi ",j+1,"º numero a ser digitado\n")
	}
}	
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 343; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
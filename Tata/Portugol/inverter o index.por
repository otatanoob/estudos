programa
{
	
	funcao inicio()
	{
		inteiro numero[10], i=0, j, aux

		enquanto(i<=9){
			escreva("Escreva o ",i+1,"º numero:")
			leia(numero[i])
			i++
		}

		i=0
		j=9
		para(i ; i<=5 ; i++){
			aux=numero[j]
			numero[j]=numero[i]
			numero[i]=aux
			j--
		}

		escreva("\nOs números com a ordem do vetor invertidos ficam:\n")
		
		i=0
		para(i; i<=9; i++){
			escreva(" ",numero[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 332; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
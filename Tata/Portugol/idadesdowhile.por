programa
{
	
	funcao inicio()
	{
		inteiro idade, i=0, f=0

		faca{
			escreva("Digite sua idade: ")
			leia(idade)
			
			se(idade>=1 e idade<21){
				i++
			}
			senao se(idade>50){
				f++
			}
			
		}enquanto(idade>=1)

		escreva("Total de pessoa com menos de 21 anos: ", i, "\nTotal de pessoas com mais de 50 anos: ",f)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 139; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
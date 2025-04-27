/*
 * 2.	Faça um algoritmo que receba 3 
 * valores numéricos e ordene-os em ordem crescente.
 */

programa
{
	
	funcao inicio()
	{
		inteiro num1, num2, num3, aux

		escreva("Digite o número 1: ")
		leia(num1)

		escreva("Digite o número 2: ")
		leia(num2)

		escreva("Digite o número 3: ")
		leia(num3)
		
		se(num1 > num2){
			aux=num2
			num2=num1
			num1=aux
		}
		se(num2 > num3){
			aux=num3
			num3=num2
			num2=aux			
		}
		se(num1 > num2){
			aux=num2
			num2=num1
			num1=aux		
		}

		escreva(num1, " " ,num2, " ", num3)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 436; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
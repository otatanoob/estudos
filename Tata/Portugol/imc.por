programa
{
	
	funcao inicio()
	{
		real altura, peso, imc
		
		escreva("Qual a sua altura:  ")
		leia(altura)

		escreva("Qual seu peso:  ")
		leia(peso)

		imc = peso/(altura * altura)
		escreva("\nseu imc é: ",imc)
		se (imc<18.5){
			escreva("\nAbaixo do peso")}
			senao se (imc>=18.5 ou imc<=25){
				escreva ("\nPeso normal")}
				senao se (imc>25 e imc<=30){
					escreva("\nAcima do peso")}
					senao se (imc>30){
						escreva("\nObeso")}
		}
	}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 446; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
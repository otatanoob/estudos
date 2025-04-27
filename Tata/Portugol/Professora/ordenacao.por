programa
{
	
	funcao inicio()
	{
		inteiro numeros[10], aux

		para(inteiro i=0; i<10; i++){
			escreva("numeros[",i,"]:")
			leia(numeros[i])
		}

		para(inteiro fim=9;fim>=1;fim--){
			para(inteiro i=0;i<fim;i++){
				se (numeros[i]>numeros[i+1]){
					aux=numeros[i]
					numeros[i]=numeros[i+1]
					numeros[i+1]=aux
				}
			}
		}

		escreva("Vetor ordenado: ")
		para(inteiro i=0; i<10; i++){
			escreva(numeros[i]," ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 369; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
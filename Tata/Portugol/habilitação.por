programa
{
    funcao inicio()
    {
        inteiro idade
        cadeia hab, infracao

        escreva("Qual a sua idade: ")
        leia(idade)

        escreva("Está habilitado com carteira B a dois anos? Ou carteira C a um ano? (S/N): ")
        leia(hab)

        escreva("Você teve alguma infração nos últimos 12 meses? (S/N): ")
        leia(infracao)

        se (idade >= 21 e hab == "S" e infracao == "N") {
            escreva("Apto")
        } senao {
            escreva("Não Apto")
        }
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 514; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
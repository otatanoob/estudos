#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float numero, indice, raiz;

    printf("\nDigite um número: ");
    scanf("%f", &numero);

    printf("\nDigite o índice da raiz: ");
    scanf("%f", &indice);

    // Cálculo da raiz de qualquer índice
    raiz = pow(numero, 1.0 / indice);

    // Exibindo o resultado
    printf("\nA raiz de índice %.2f de %.2f = %.2f\n", indice, numero, raiz);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, quad, cubo;
    float r2, r3;

    printf("\nEntre com um número: ");
    scanf("%d", &n);

    // Corrigindo a função pow(): pow(base, expoente)
    quad = pow(n, 2);
    cubo = pow(n, 3);

    r2 = sqrt(n);
    r3 = cbrt(n);

    printf("\nQuadrado do número = %d", quad);
    printf("\nCubo do número = %d", cubo);
    printf("\nRaiz quadrada do número = %.2f", r2);
    printf("\nRaiz cúbica do número = %.2f", r3);

    getchar(); // Para evitar que a janela console feche imediatamente
    return 0;
}

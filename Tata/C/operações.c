#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\nSoma dos números 10 e 3 = %d\n", 10 + 3);       // Soma
    printf("\nMultiplicação dos números 19 e 2 = %d\n", 19 * 2); // Multiplicação
    printf("\nSubtração dos números 25 e 4 = %d\n", 25 - 4);     // Subtração (Corrigido de 25-4)
    printf("\nResto da divisão entre os números 19 e 4 = %d\n", 19 % 4); // Resto da divisão (módulo)

    printf("\nParte inteira da divisão entre os números 19 e 4 = %d\n", (int)(19.0 / 4)); // Divisão inteira
    printf("\nDivisão entre os números 19 e 4 = %f\n", 19.0 / 4);     // Divisão com resultado decimal

    return 0;
}

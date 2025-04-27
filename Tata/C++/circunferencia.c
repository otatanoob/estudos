#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

int main() {
    setlocale(LC_ALL, "Portuguese");
    float r, a;

    printf("\nEntre com o raio da circunferência: ");
    scanf("%f", &r);

    a = pi * pow(r, 2); // Fórmula correta para a área: pi * r * r

    printf("\nÁrea da circunferência = %.2f", a); // Exibe a área com 2 casas decimais

    getchar();
    return 0;
}

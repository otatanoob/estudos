#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float dist, velmed, tempo;
    int horas, minutos, segundos, tempo_s;

    printf("\nQual é a distância a percorrer: ");
    scanf("%f", &dist);

    printf("\nEntre com a velocidade média do veículo: ");
    scanf("%f", &velmed);

    tempo = dist / velmed;

    printf("\nExibindo o tempo em horas:minutos:segundos\n");

    tempo_s = (int)(tempo * 3600); // Converte tempo em segundos
    horas = tempo_s / 3600;        // Calcula horas
    tempo_s %= 3600;              // Atualiza tempo_s para o restante após horas

    minutos = tempo_s / 60;        // Calcula minutos
    segundos = tempo_s % 60;       // Calcula segundos

    printf("%dH:%dm:%ds", horas, minutos, segundos);

    getchar();
    return 0;
}

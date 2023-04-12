#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    float massa, massa_final = 0.5;
    int t = 0;

    printf("Digite a massa inicial do material radioativo (em gramas): ");
    scanf("%f", &massa);

    while (massa > massa_final) {
        massa /= 2.0;
        t += 50;
    }

    int h = t / 3600;
    int min = (t % 3600) / 60;
    int seg = t % 60;

    printf("Massa inicial: %.2f g\n", massa*2.0);
    printf("Massa final: %.2f g\n", massa);
    printf("Tempo: %d horas, %d minutos e %d segundos.\n", h, min, seg);

    return 0;
}
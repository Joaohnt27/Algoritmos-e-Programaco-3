#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n_entrevistados = 2000;
    int n_sim = 0, n_nao = 0;
    int n_m = 0, n_m_sim = 0;
    int n_h = 0, n_h_nao = 0;
    char sexo, resp;

    for (int i = 1; i <= n_entrevistados; i++) {
        printf("Entrevistado %i:\n", i);
        printf("Sexo: ");
        scanf(" %c", &sexo);
        printf("Resposta: ");
        scanf(" %c", &resp);

        if (resp == 'S') {
            n_sim++;
            if (sexo == 'F') {
                n_m++;
                n_m_sim++;
            }
        } else if (resp == 'N') {
            n_nao++;
            if (sexo == 'M') {
                n_h++;
                n_h_nao++;
            }
        } else {
            printf("Resposta invalida!\n");
            i--;
        }
    }

    printf("Numero de pessoas que responderam 'Sim': %i\n", n_sim);
    printf("Numero de pessoas que responderam 'Nao': %i\n", n_nao);
    if (n_m == 0) {
        printf("Nao houve mulheres entrevistadas.\n");
    } else {
        printf("Porcentagem de mulheres que responderam 'Sim': %.2f%%\n", (float)n_m_sim/n_m*100);
    }
    if (n_h == 0) {
        printf("Nao houve homens entrevistados.\n");
    } else {
        printf("Porcentagem de homens que responderam 'Nao': %.2f%%\n", (float)n_h_nao/n_h*100);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int canal, pessoas, total_pessoas = 0;
    int canal_4 = 0, canal_5 = 0, canal_7 = 0, canal_12 = 0;
    float porcentagem_4, porcentagem_5, porcentagem_7, porcentagem_12;

    printf("Informe os dados de audiencia:\n");
    printf("(Digite 0 para encerrar)\n");

    while (1) {
        printf("\nCanal: ");
        scanf("%i", &canal);

        if (canal == 0) {
            break;
        }

        printf("Numero de pessoas assistindo: ");
        scanf("%i", &pessoas);

        if (pessoas > 0) {
            total_pessoas += pessoas;

            switch (canal) {
                case 4:
                    canal_4 += pessoas;
                    break;
                case 5:
                    canal_5 += pessoas;
                    break;
                case 7:
                    canal_7 += pessoas;
                    break;
                case 12:
                    canal_12 += pessoas;
                    break;
                default:
                    printf("Canal indisponivel!\n");
            }
        }
    }

    porcentagem_4 = (float)canal_4 / total_pessoas * 100;
    
    porcentagem_5 = (float)canal_5 / total_pessoas * 100;
    
    porcentagem_7 = (float)canal_7 / total_pessoas * 100;
    
    porcentagem_12 = (float)canal_12 / total_pessoas * 100;

    printf("\nPorcentagem de audiencia de cada canal:\n");
    
    printf("Canal 4: %.2f%%\n", porcentagem_4);
    
    printf("Canal 5: %.2f%%\n", porcentagem_5);
    
    printf("Canal 7: %.2f%%\n", porcentagem_7);
    
    printf("Canal 12: %.2f%%\n", porcentagem_12);

    return 0;
}
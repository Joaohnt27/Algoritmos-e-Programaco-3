#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int max_operarios_standard = 24;
    int max_operarios_luxo = 32;
    int num_operarios_total = 40;

    int lucro_standard, lucro_luxo; 
    
	printf("Informe o lucro por Radio Standard: R$");
    scanf("%i", &lucro_standard);
    printf("Informe o lucro por Radio Luxo: R$");
    scanf("%i", &lucro_luxo);
	printf("\n");
	
    int max_radios_standard = max_operarios_standard;
    int max_radios_luxo = max_operarios_luxo / 2;

    int n_standard_max = 0, n_luxo_max = 0;
    int num_operarios_standard_maximo = 0, num_operarios_luxo_maximo = 0;
    int lucro_maximo = 0; 

    for (int i = 0; i <= max_radios_standard; i++) {
        for (int j = 0; j <= max_radios_luxo; j++) {
            int num_operarios_standard = i;
            int num_operarios_luxo = j * 2;
            int num_operarios_usados = num_operarios_standard + num_operarios_luxo;

            if (num_operarios_usados > num_operarios_total) {
                continue;
            }

            int n_standard = i;
            int n_luxo = j;
            int lucro_total = n_standard * lucro_standard + n_luxo * lucro_luxo;

            if (lucro_total > lucro_maximo) {
                lucro_maximo = lucro_total;
                num_operarios_standard_maximo = num_operarios_standard;
                num_operarios_luxo_maximo = num_operarios_luxo;
                n_standard_max = n_standard;
                n_luxo_max = n_luxo;
            }
        }
    }

    printf("Esquema de lucro maximo:\n");
    printf("---> Numero de operarios na linha standard: %i\n", num_operarios_standard_maximo);
    printf("---> Numero de operarios na linha luxo: %i\n", num_operarios_luxo_maximo);
    printf("---> Numero de radios standard produzidos: %i\n", n_standard_max);
    printf("---> Numero de radios luxo produzidos: %i\n", n_luxo_max);
    printf("---> Lucro: R$%i\n", lucro_maximo);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int ingressos_iniciais = 120;
    int despesas = 200;
    float preco_inicial = 5.0;
    float aumento_ingressos = 26;
    float reducao_preco = 0.5;

    printf("Preco do ingresso      Lucro esperado\n");

    float lucro_maximo = 0;
    float preco_maximo = 0;
    float ingressos_maximo = 0;

    for (float preco = preco_inicial; preco >= 1.0; preco -= reducao_preco) {
        float ingressos = ingressos_iniciais + ((preco_inicial - preco) / reducao_preco) * aumento_ingressos;
        float receita = ingressos * preco;
        // Lucro
        float lucro = receita - despesas;

        printf("%10.2f           %12.2f\n", preco, lucro);

        if (lucro > lucro_maximo) {
            lucro_maximo = lucro;
            preco_maximo = preco;
            ingressos_maximo = ingressos;
        }
    }

    printf("\nLucro maximo esperado:\n");
    printf("---> Preco de cada ingresso: %.2f\n", preco_maximo);
    printf("---> Numero de ingressos vendidos: %.2f\n", ingressos_maximo);
    printf("---> Lucro: %.2f\n", lucro_maximo);

    return 0;
}






#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    float valor_min, tax_serv, valor, saldo;
    int qtd_transacoes, n_conta, tr;
    char codigo;

    printf("Informe o saldo minimo: ");
    scanf("%f", &valor_min);

    printf("Informe a quantidade de transacoes: ");
    scanf("%i", &qtd_transacoes);

    printf("Insira a taxa de servico ");
    scanf("%f", &tax_serv);

    n_conta = 1;
    while (n_conta > 0) {
        
        printf("Informe o numero da conta: ");
        scanf("%i", &n_conta);

        if (n_conta > 0) {
            tr = 0;
            saldo = 0;
            while (tr < qtd_transacoes) {

                printf("Informe o valor: ");
                scanf("%f", &valor);

                printf("Informe (D - Debito / C - Credito): ");
                scanf(" %c", &codigo);

                if (codigo == 'D')
                    saldo -= valor;
                else
                    saldo += valor;

                tr++;
            }

            if (saldo < valor_min)
                saldo -= tax_serv;

            if (saldo < 0) 
                printf("%i - Nao ha fundos!\n", n_conta);
            else
                printf("%i - R$ %.2f\n", n_conta, saldo);
        }

    }

    return 0;
}
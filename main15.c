#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    // leitura dos dados iniciais
    float saldo_minimo, taxa_servico;
    int num_transacoes;
    scanf("%f %d %f", &saldo_minimo, &num_transacoes, &taxa_servico);
    
    // processamento das transações
    int num_conta, cod_transacao;
    float valor_transacao, saldo_atual = 60.0;
    for (int i = 1; i <= num_transacoes; i++) {
        scanf("%d %f %d", &num_conta, &valor_transacao, &cod_transacao);
        
        // atualiza saldo conforme tipo de transação
        if (cod_transacao == 1) { // depósito
            saldo_atual += valor_transacao;
        } else if (cod_transacao == 2) { // retirada
            saldo_atual -= valor_transacao;
        }
        
        // verifica se saldo atual está abaixo do mínimo
        if (saldo_atual < saldo_minimo) {
            saldo_atual -= taxa_servico;
        }
        
        // verifica se houve insuficiência de fundos
        if (saldo_atual < 0.0) {
            printf("Conta %d: NAO HA FUNDOS\n", num_conta);
        } else {
            printf("Conta %d: Saldo atual = R$ %.2f\n", num_conta, saldo_atual);
        }
    }
    
    return 0;
}






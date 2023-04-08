#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int codigo, l10=0, l1020=0, l20=0;
	float preco_compra, preco_venda, lucro, lucro_total = 0, custo_total = 0, venda_total = 0; 
	
	printf("Informe o codigo: ");
	scanf("%i", &codigo);
	while (codigo !=0) {
		printf("Informe o preco de compra: ");
		scanf("%f", &preco_compra);
		printf("Informe o preco da venda: ");
		scanf("%f", &preco_venda);
		
		lucro = preco_venda - preco_compra;
		
		if (lucro/preco_compra < 0.1)
		l10++;
		else if (lucro/preco_compra <= 0.2)
		l1020++;
		else
		l20++;
		
		lucro_total += lucro;
		custo_total += preco_compra;
		venda_total += preco_venda;
		
		printf("A mercadoria %i possui um lucro de R$%.2f (%.1f%%). \n", codigo, lucro, lucro/preco_compra*100);
		printf("Informe o codigo: ");
		scanf("%i", &codigo);
		
	}
	
	printf("%i mercadorias tem lucro de ate 10%%. \n", l10);
	printf("%i mercadorias tem lucro entre 10%% e 20%%.\n", l1020);
  	printf("%i mercadorias tem lucro acima de 20%%.\n", l20);
  	printf("Custo total: R$%.2f\n", custo_total);
  	printf("Venda total: R$%.2f\n", venda_total);
  	printf("Lucro total: R$%.2f\n", lucro_total);
  	
	return 0;
}
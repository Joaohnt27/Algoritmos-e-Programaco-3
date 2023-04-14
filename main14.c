#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float t_padrao1, t_padrao2, t_padrao3, t_feito1, t_feito2, t_feito3, delta1, delta2, delta3, pts_totais, vencedor = 0;
int i = 1, n_inscricao, equipe_vencedora;

int main(int argc, char *argv[]) {
	printf("Informe o tempo padrao da primeira fase (em minutos decimais): ");
	scanf("%f", &t_padrao1);
	printf("Informe o tempo padrao da segunda fase (em minutos decimais): ");
	scanf("%f", &t_padrao2);
	printf("Insira o tempo padrao da terceira fase (em minutos decimais): ");
	scanf("%f", &t_padrao3);
	
	while (i != 0){
		float pontos = 0;
		
		printf("\n\n(Para encerrar, digite: 9999)\n");
		printf("Insira o numero de inscricao da equipe: ");
		scanf("%i", &n_inscricao);
			if(n_inscricao == 9999){
				printf("\n\nFim do programa!\n\n");
				break;
			}
		printf("\nInsira o tempo que a equipe realizou na primeira fase (em minutos decimais): ");
		scanf("%f", &t_feito1);
		
			delta1 = t_padrao1 - t_feito1; 
			delta1 = abs(delta1);
			
			if(delta1 < 3){
				pontos += 100;
			}
			else if (delta1 >= 3 && delta1 <= 5){
				pontos += 80;
			}
			else{
				pontos += 80 - (delta1 - 5)/5;
			}
			
			printf("%.2f Pontos registrados ate o momento!", pontos);
			
		printf("\nInsira o tempo que a equipe realizou na segunda fase (em minutos decimais): ");
		scanf("%f", &t_feito2);
		
			delta2 = t_padrao2 - t_feito2; 
			delta2 = abs(delta2);
			
			if(delta2 < 3){
				pontos += 100;
			}
			else if (delta2 >= 3 && delta2 <= 5){
				pontos += 80;
			}
			else{
				pontos += 80 - (delta2 - 5)/5;
			}
			
			printf("%.2f Pontos registrados ate o momento!", pontos);
			
		printf("\nInsira o tempo que a equipe realizou na terceira fase (em minutos decimais): ");
		scanf("%f", &t_feito3);
		
			delta3 = t_padrao3 - t_feito3; 
			delta3 = abs(delta3);
			
			if(delta3 < 3){
				pontos += 100;
			}
			else if (delta3 >= 3 && delta3 <= 5){
				pontos += 80;
			}
			else{
				pontos += 80 - (delta3 - 5)/5;
			}
			
			printf("%.2f Pontos Totais\n", pontos);
			printf("---> Equipe em questao: %i\n\n", n_inscricao);
			
			pts_totais = pontos;
			
			if (pts_totais > vencedor){
				vencedor = pts_totais;
				equipe_vencedora = n_inscricao;
			}
		
	}
	
	printf("\n---> A equipe vencedora foi: %i  // Com %.2f Pontos Totais! <---\n", equipe_vencedora, vencedor);
	printf("---> Parabens <---");
	
	return 0;
}
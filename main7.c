#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char id;
    int n_alunos, n_ausentes, n_presentes;
    int total_turmas_ausencia_maior_5 = 0, total = 0;

	printf("Para encerrar, digite: 0\n");
	
	printf("Informe a identificacao da turma (A, B, C, D, ...): ");
	scanf("%c", &id);
	
	printf("Informe o numero de alunos matriculados na turma: ");
	scanf("%i", &n_alunos);
	
	printf("Informe o numero de alunos ausentes na primeira prova: ");
	scanf("%i", &n_ausentes);
	
    while (id != '0') {
        n_presentes = n_alunos - n_ausentes;
        float porcentagem_ausentes = ((float) n_ausentes / n_alunos) * 100;

        printf("\nTurma %c: %.2f%% de ausencia\n", id, porcentagem_ausentes);

        if (porcentagem_ausentes > 5) {
            total_turmas_ausencia_maior_5++;
        }

        total += n_alunos;

        printf("\nInforme a identificacao da turma (A, B, C, D ...): ");
        scanf(" %c", &id);

        if (id != '0') {
        	
            printf("Informe o numero de alunos matriculados na turma: ");
            scanf("%i", &n_alunos);
            
            printf("Informe o numero de alunos ausentes na primeira prova: ");
            scanf("%i", &n_ausentes);
        }
    }

    printf("\nTotal de turmas com mais de 5%% de ausentes: %i\n", total_turmas_ausencia_maior_5);
    printf("Total de alunos: %i\n", total);

    return 0;
}
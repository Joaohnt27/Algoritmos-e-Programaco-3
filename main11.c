#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int codigo, num_vagas, num_can_m, num_can_f;
    int total = 0, codigo_maior_can_vaga = 0;
    float porcentagem_fem, maior_can_vaga = 0;

    printf("Para encerrar, digite: 0\n");
    printf("Digite o codigo do curso: ");
    scanf("%i", &codigo);

    while (codigo != 0) {
        printf("Digite o numero de vagas: ");
        scanf("%i", &num_vagas);

        printf("Digite o numero de candidatos do sexo masculino: ");
        scanf("%i", &num_can_m);

        printf("Digite o numero de candidatos do sexo feminino: ");
        scanf("%i", &num_can_f);

        int total_curso = num_can_m + num_can_f;
        float can_vaga = (float) total_curso / num_vagas;

        porcentagem_fem = ((float) num_can_f / total_curso) * 100;

        printf("\nCurso: %i\n", codigo);
        printf("Candidatos por vaga: %.2f\n", can_vaga);
        printf("Porcentagem de candidatos do sexo feminino: %.2f%%\n", porcentagem_fem);

        if (can_vaga > maior_can_vaga) {
            maior_can_vaga = can_vaga;
            codigo_maior_can_vaga = codigo;
        }

        total += total_curso;

        printf("\nDigite o codigo do curso: ");
        scanf("%i", &codigo);
    }

    printf("\nO maior numero de candidatos por vaga foi: %.2f\n", maior_can_vaga);
    printf("Curso: %i\n", codigo_maior_can_vaga);
    printf("Total de candidatos: %d\n", total);

    return 0;
}
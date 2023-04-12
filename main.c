#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade = 1, i;
	float media, soma = 0;
	
	printf("Para encerrar, digite 0\n");
	
	while (idade != 0) {
		printf("Informe a idade do individuo %i: ", i+1);
		scanf("%i", &idade);
		
		soma += idade;
		i++; 
	}
	
	media = soma / i--;
	printf("A media de idades e: %.2f\n", media);
	
	return 0;
}
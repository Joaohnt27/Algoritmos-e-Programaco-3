#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   int idade, soma = 0, qtd = 0;

	printf("Para encerrar, digite: 0\n");
	
   do {	
    	printf("Informe a idade do individuo: ");
    	scanf("%i", &idade);

      if (idade > 0) { 
         soma += idade;
         qtd++; 
      }

   } while (idade != 0);

   if (qtd == 0) {
      printf("Nao foram informadas idades validas.\n");
   } else {
      float media = (float) soma / qtd;
      printf("A media das idades e: %.2f\n", media);
   }

   return 0;
}
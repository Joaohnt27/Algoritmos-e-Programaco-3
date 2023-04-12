#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   float altura, h_maior = 0, h_menor = 0, soma_h_mulheres = 0, media_h_mulheres;
   int num_h = 0, num_m = 0;
   char sexo;

   for (int i = 1; i <= 50; i++) {
      printf("Insira a altura da pessoa %i: ", i);
      scanf("%f", &altura);

      printf("Informe o sexo da pessoa: ");
      scanf(" %c", &sexo);

      if (i == 1) { 
         h_maior = altura;
         h_menor = altura;
      } else {
         if (altura > h_maior) {
            h_maior = altura;
         }
         if (altura < h_menor) {
            h_menor = altura;
         }
      }

      if (sexo == 'M' || sexo == 'm') {
         num_h++;
      } else if (sexo == 'F' || sexo == 'f') {
         num_m++;
         soma_h_mulheres += altura;
      } else {
         printf("Sexo invalido. Informe novamente.\n");
         i--; 
      }
   }

   if (num_m > 0) {
      media_h_mulheres = soma_h_mulheres / num_m;
      printf("\nA maior altura informada e: %.2f\n", h_maior);
      printf("A menor altura informada e: %.2f\n", h_menor);
      printf("A media de altura das mulheres e: %.2f\n", media_h_mulheres);
      printf("O numero de homens e: %i\n", num_h);
   } else {
      printf("Nao foram informadas alturas de mulheres.\n");
   }

   return 0;
}
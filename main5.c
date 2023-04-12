#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int anos = 0;
    float pop_A = 9000000, pop_B = 20000000;

    while (pop_A < pop_B) {
        pop_A *= 1.03;
        pop_B *= 1.015;
        anos++;
    }

    printf("A populacao do pais A ira ultrapassar a do pais B em %i anos.\n", anos);

    return 0;
}
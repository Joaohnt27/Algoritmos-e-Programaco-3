#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// f = farenheit
	// c = celsius
	int f = 50;
	float c;
	
	printf(" Farenheit        Celsius\n");
	while (f <= 150) {
		c = (5.0 / 9.0) * (f - 32);
		printf("%6i          %8.2f\n", f, c);
		f++;
	}
		
	return 0;
}
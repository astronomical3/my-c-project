#include <stdio.h>
#include "calc.h"

int main(){
	double x = 2.00;
	double y = 2.00;

	printf("Hello World!\n");
	printf("This is Astro\n\n");

	printf("%.2f + %.2f is %.2f\n", x, y, add(x, y));
	printf("%.2f - %.2f is %.2f\n", x, y, sub(x, y));
	printf("%.2f * %.2f is %.2f\n", x, y, mult(x, y));
	printf("%.2f / %.2f is %.2f\n", x, y, div(x, y));
	printf("\n");

	return 0;
}

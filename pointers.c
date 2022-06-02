#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Apuntadores\n");

	float val;
	float *apVal;
	apVal = &val;
	*apVal = 3.1416;

	printf("El valor de val es: %f\n", val);
	return 0;
}

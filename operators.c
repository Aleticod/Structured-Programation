#include <stdio.h>
#include <stdlib.h>

int main() {

	int rSum;
	float rRes;
	float rDiv;
	float rMult;
	int rMod;

	rSum = 7 + 3;
	rRes = 7.3 + 5.2;
	rDiv = 7.7 / 4.5;
	rMult = 7 * 6;
	rMod = 5 % 4;
	
	printf("El valor de la suma es: %i\n", rSum);
	printf("El valor de la resta es: %f\n", rRes);
	printf("El valor de la division es: %f\n", rDiv);
	printf("El valor de la multiplicacion es: %f\n", rMult);
	printf("El valor del modulo es: %i\n", rMod);
	
	return 0;
}

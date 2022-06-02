#include <stdio.h>
#include <stdlib.h>
#include "myLibrary.h"

int main() {
	printf("Uso de mis funciones creadas en myLibrary.h\n");

	float sum = addition(3.5, 6.4);
	
	float rest = substraction(64.4, 6);

	printf("la suma es: %f y la resta es: %f\n", sum, rest);
	return 0;
}

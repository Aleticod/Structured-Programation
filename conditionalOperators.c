#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Reto de condicionales\n");

	int numA, numB;

	printf("Ingrese el primer numero: ");
	scanf("%i", &numA);
	printf("Ingrese el segundo numero: ");
	scanf("%i", &numB);

	if(numA < numB)
		printf("El primer numero es menor\n");
	else
		printf("El segundo numero es menor\n");

	return 0;
}

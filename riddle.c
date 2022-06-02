#include <stdio.h>
#include <stdlib.h>

int main() {
	int valA = 5;
	int valB;

	printf("Este es un programa de adivinaza\n");
	printf("Tendras que adivinar el numero que la computadora tiene\n");

	printf("Ingrese un numero entre 0 y 10: ");
	scanf("%i", &valB);

	if(valA == valB)
		printf("Adivinaste\n");
	else
		printf("Ese no es, perdiste\n");

	return 0;
}

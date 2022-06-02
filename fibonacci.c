#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Este challenge imprime la serie finacci\n");

	int numTerm, firstTerm, secondTerm;
	firstTerm = 1;
	secondTerm = 2;

	printf("Ingrese el numero de terminos de la serie: ");
	scanf("%i", &numTerm);

	if(numTerm <= 2) {
		switch(numTerm) {
			case 1:
				printf("Serie fibonacci: %i\n", firstTerm);
				break;
			case 2:
				printf("Serie fibonacci: %i, %i\n", firstTerm, secondTerm);
				break;
		}
	}
	else {
		int fibo = secondTerm;
		int previous = firstTerm;
		int aux;

		printf("Serie fibonacci: %i, %i", firstTerm, secondTerm);

		for(int i = 3; i <= numTerm; i++) {
			aux = fibo;
			fibo = fibo + previous;
			previous = aux;
			
			printf(", %i", fibo);
		}
		printf("\n");
	}

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Arreglos bidimensionales\n");

	int bidimensionalArray[3][3];

	bidimensionalArray[0][0] = 11;
	bidimensionalArray[1][0] = 12;
	bidimensionalArray[2][0] = 16;

	bidimensionalArray[0][1] = 17;
	bidimensionalArray[1][1] = 31;
	bidimensionalArray[2][1] = 15;

	bidimensionalArray[0][2] = 19;
	bidimensionalArray[1][2] = 20;
	bidimensionalArray[2][2] = 15;

	printf("Valor en (0,2): %i\n", bidimensionalArray[0][2]);
	return 0;
}


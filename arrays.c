#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Arreglos unidimensionales\n");
	
	int integerList[3];
	integerList[0] = 4;
	integerList[1] = 9;
	integerList[2] = 7;

	float floatList[] = {23.2, 34.12, 213.45};

	char charList[3];
	charList[0] = 'd';
	charList[1] = 'A';
	charList[2] = 'R';

	printf("\n segundo entero: \t\t %i", integerList[1]);
	printf("\n tercer flotante: \t\t %f", floatList[2]);
	printf("\n primer caracter: \t\t %c", charList[0]);
	
	return 0;
}

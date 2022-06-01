#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Condicional if\n");

	float valA, valB, valC;

	valA = valB = 100;

	printf("Primera condicion\n");

	if(valA == valB)
		printf("Ambos son iguales\n");
	
	printf("Segunda condicion\n");

	if(valA == valB) {
		printf("Ambos valores son iguales\n");
		valC = valA + valB;
		printf("Ademas la suma es %f\n", valC);
	}

	printf("Condicionales if-else\n");

	valA = 50;
	valB = 100;
	valC = 150;

	if(valA == valB)
		printf("No se va cumplir esta condicion");
	else if(valB == valC)
		printf("Tampoco se va cumplir este");
	else {
		printf("Ninguna condicion se cumplio\n");
		printf("Despues de esta linea el progrma va a terminar\n");
	}

	return 0;
}

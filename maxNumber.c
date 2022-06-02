#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Este es un reto que busca el numero mayor\n");
	printf("Escriba el tamaño del arreglo: ");
	int lenght;
	scanf("%i", &lenght);

	int array[lenght];

	for(int i = 0; i < lenght; i++) {
		printf("Ingrese el elemento %i del array: ", i + 1);
		scanf("%i", &array[i]);
	}


	int max = array[0];

	for(int i = 1; i < lenght; i++) {
		if(max < array[i]) {
			max = array[i];
		}
	}
	printf("El numero mayor en el array es: %i\n", max);

	return 0;
}

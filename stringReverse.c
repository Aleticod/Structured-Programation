#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Cadena de caracteres \n");

	char nameC[50];
	char nameR[50];
	int size;

	printf("Ingressar el nombre con gets: \n");
	//gets es una funcion que nos permite leer
	//una cadena de caracters incluendo los espacios
	//y termina cuando lee el fin de linea (osea enter)
	
	gets(nameC);

	printf("El nombre es: ");
	puts(nameC);
	
	//calcular la longitud de una cadena de caracteres
	size = strlen(nameC);
	
	for(int i = 0; i < size; i++) {
		nameR[i] = nameC[size - 1 - i];
	}
	printf("El nombre invertido es: ");
	puts(nameR);

	return 0;
}

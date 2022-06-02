#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Cadena de caracteres \n");

	char nameC[50];
	char text[] = "hola como estas soy alex";	
	int size, othersize;
	othersize = strlen(text);
	
	printf("Ingressar el nombre con gets: \n");
	//gets es una funcion que nos permite leer
	//una cadena de caracters incluendo los espacios
	//y termina cuando lee el fin de linea (osea enter)
	
	gets(nameC);

	printf("El nombre es: ");
	puts(nameC);
	
	//calcular la longitud de una cadena de caracteres
	size = strlen(nameC);
	printf("\nEl tamanio de la cadena es: %i\n", size);
	puts(text);
	printf("\nEl tamanio de la segunda cadena es: %i\n", othersize);
}

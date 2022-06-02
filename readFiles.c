#include <stdio.h>
#include <stdlib.h>


// Definicion de un Struct, este no es una funcion

struct personalData {
	char name[20];
	char lastName[20];
	int age;
};

int main() {

	printf("Lectura de archivos \n");

	// Definicion de una variable del tipo struct
	
	struct personalData person;
	
	// Manejo de archivos
	FILE *archivo;
	archivo = fopen("DatosPerosnales001.dat", "rb");

	if(archivo != NULL) {
		fflush(stdin); // LImpieza del buffer	

		// Lectura de un archivo
		fread(&person, sizeof(person), 1, archivo);

		printf("Imprimir datos\n");


		printf("Nombres: %s \n", person.name);

		printf("Apellidos: %s \n", person.lastName);

		printf("Edad: %i \n", person.age);

		fclose(archivo);
	}
	else {
		printf("No se ha podido el archivo\n");
	}

	return 0;
}

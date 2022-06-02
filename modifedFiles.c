#include <stdio.h>
#include <stdlib.h>


// Definicion de un Struct, este no es una funcion

struct personalData {
	char name[20];
	char lastName[20];
	int age;
};

int main() {

	printf("Modificacion de archivos \n");

	// Definicion de una variable del tipo struct
	
	struct personalData person;
	
	// Manejo de archivos
	FILE *archivo;
	archivo = fopen("DatosPerosnales001.dat", "wb");

	if(archivo != NULL) {
		fflush(stdin); // LImpieza del buffer	
		printf("Leer datos: \n");
		printf("Ingresar nombre: \n");
		gets(person.name);
		printf("Ingresar apellido: \n");
		gets(person.lastName);
		printf("Ingresar edad: \n");
		scanf("%i", &person.age);

		printf("Imprimir datos\n");


		printf("%s \n", person.name);

		printf("%s \n", person.lastName);

		printf("%i \n", person.age);

		// Escribir dentro del archivo

		fwrite(&person,sizeof(person), 1, archivo);

		fclose(archivo);
	}
	else {
		printf("No se ha podido el archivo\n");
	}

	return 0;
}

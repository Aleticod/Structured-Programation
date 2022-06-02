#include <stdio.h>
#include <stdlib.h>


// Definicion de un Struct, este no es una funcion

struct personalData {
	char name[20];
	char lastName[20];
	int age;
};

int main() {

	printf("Manejo de tipo de objeto Struct\n");

	// Definicion de una variable del tipo struct
	
	struct personalData person;

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

	return 0;
}

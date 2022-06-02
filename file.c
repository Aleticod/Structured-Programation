#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Archivos!!!1 Crear un achivo\n");
	
	FILE *archivo;
	
	archivo = fopen("archivo001.dat", "w");

	if(archivo != NULL) {
		printf("El archivo ha sido creado correctamente");
		fclose(archivo);
	}
	else {
		printf("El archivo no se ha creado\n");
	}

	return 0;
}

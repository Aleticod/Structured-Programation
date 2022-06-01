#include <stdio.h>
#include <stdlib.h>

int main() {
	int radio, altura;
	float area, volumen;
	float pi = 3.141618;

	printf("hoy dia vamos a calcular el area y volumen de un cilindroņ\n");
	printf("");
	printf("Ingrese el radio r: ");
	scanf("%i", &radio);
	printf("Ingrese la altura h: ");
	scanf("%i", &altura);
	printf("\n");
	
	area = pi * radio * radio;
       	volumen = area * altura;

	printf("El area es: %f\n", area);
	printf("El volumen es: %f\n", volumen);

	return 0;
}

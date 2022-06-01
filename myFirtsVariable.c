#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int integerA = 1;
    float floatA = 1.1;
    char letterA = 'A';
    double doubleA = 1.2;
	// En la siguiente linea estamos imprimiendo
    printf("El valor de nuestro entero A es: %i\n",integerA);
    printf("El valor de nuestro flotante A es: %f\n", floatA);
    printf("El valor de nuestro double A es: %f\n", doubleA);
    printf("El valor de mi caracter A es: %c\n", letterA);
    printf("Ingrese el valor del entero A: ");
    scanf("%i", &integerA);
    printf("El entero A es: %i\n", integerA);
    printf("Ingrese el valor del float A: ");
    scanf("%f", &floatA);
    printf("El flotanten A es: %f\n", floatA);
    printf("Ingrese la letra A: ");
    scanf(" %c", &letterA);
    printf("La el caracter es: %c\n", letterA);
    return 0;
}

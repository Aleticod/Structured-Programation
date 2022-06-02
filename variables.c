#include <stdio.h>
#include <stdlib.h>

// Declaration of global variables

char publicText[] = {"Texto en una variable global"};

void check() {

	char privateText[] = {"Texto es una variable local"};

	printf("\nImprimir desde la funcion: check\n");
	printf("Variable global");
	
	printf(" %s", publicText);

}

int main() {
	
	check();

	return 0;
}

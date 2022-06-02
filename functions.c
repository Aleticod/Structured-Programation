#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b) {
	int result;
	result = a + b;
	return result;
}




int main() {
	int sum = addition(3, 5);
	printf("La suma es: %i\n", sum);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

suma();
media();

float a, b, sumar, x;

int main() {

	printf("Prueba debuggar\n");
	printf("Prueba debuggar\n");

	suma();

	media();

	return 0;

}
suma() {

	printf("Dame el primer numero : ");
	scanf("%f", &a);

	printf("Dame el segundo numero: ");
	scanf("%f", &b);

	sumar = 0;
	sumar = a + b;

	printf("La suma de los dos numeros es: %f", sumar);
}

media() {

	x = 0;
	x = ((a + b) / 2);
	printf("\nLa media de los dos numeros es: %.2f", x);
}
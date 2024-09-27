#include <stdio.h>

void Absoluto (int valor1, int valor2, int valor3, int valor4, int valor5) {
	
	if (valor1 >= 0) {
		
		printf ("%d ", valor1);
		
	} else {
		
		printf ("%d ", valor1 *= -1);
	}
	
	if (valor2 >= 0) {
		
		printf ("%d ", valor2);
		
	} else {
		
		printf ("%d ", valor2 *= -1);
		
	} if (valor3 >= 0) {
		
		printf ("%d ", valor3);
		
	} else {
		
		printf ("%d ", valor3 *= -1);
	}
	
	if (valor4 >= 0) {
		
		printf ("%d ", valor4);
		
	} else {
		
		printf ("%d ", valor4 *= -1);
		
	} if (valor5 >= 0) {
		
		printf ("%d", valor5);
		
	} else {
		
		printf ("%d", valor5 *= -1);
	}
	
}

int main () {
	
	int valor1, valor2, valor3, valor4, valor5;
	
	printf ("Valor 1: ");
	scanf ("%d", &valor1);
	
	printf ("Valor 2: ");
	scanf ("%d", &valor2);
	
	printf ("Valor 3: ");
	scanf ("%d", &valor3);
	
	printf ("Valor 4: ");
	scanf ("%d", &valor4);
	
	printf ("Valor 5: ");
	scanf ("%d", &valor5);
	
	Absoluto (valor1, valor2, valor3, valor4, valor5);
}

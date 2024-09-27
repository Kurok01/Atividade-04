#include <stdio.h>
#include <math.h>

int potencia (base, expoente) {
	
	return pow(base, expoente);
}


int main () {
	
	int base, expoente;
	
	printf ("Digite a base: ");
	scanf ("%d", &base);
	
	printf ("Digite o expoente: ");
	scanf ("%d", &expoente);
	
	printf ("%d^%d = %d", base, expoente, potencia(base, expoente));
	
	return 0;
}

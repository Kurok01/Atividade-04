#include <stdio.h>

int positivoOUnegativo (int numero) {
	
	if (numero > 0) {
		
		return 1;
		
	} else if (numero < 0) {
		
		return -1;
		
	} else {
		
		return 0;
	}
}

int main () {
	
	int numero;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	printf ("%d", positivoOUnegativo (numero));
	
	return 0;
}

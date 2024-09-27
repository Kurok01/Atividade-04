#include <stdio.h>

int imparOUpar (int numero) {
	
	if (numero % 2 == 0) {
		
		return 1;
		
	} else {
		
		return 0;
	}
}

int main () {
	
	int numero;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	printf ("%d", imparOUpar (numero));
	
	return 0;
}

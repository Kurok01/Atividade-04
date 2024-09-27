#include <stdio.h>

int menorValor (int n1, int n2) {
	
	if (n1 > n2) {
		
		return n2;
		
	} else {
		
		return n1;
	}
}

int main () {
	
	int n1, n2;
	
	printf ("Digite um valor: ");
	scanf ("%d", &n1);
	
	printf ("Digite outro valor: ");
	scanf ("%d", &n2);
	
	printf ("Menor Valor: %d", menorValor(n1, n2));
}

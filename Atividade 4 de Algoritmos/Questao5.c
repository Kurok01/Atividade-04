#include <stdio.h>

void SomaDivisores (int valor1, int valor2, int valor3, int valor4, int valor5) {
	
	int i, soma = 0;
	
	printf ("\n");
	for (i = 1; i < valor1; i++) {
		
		if (valor1 % i == 0) { 
		
			soma += i;
			printf ("%d + ", i);
		}
	}
	printf ("= %d -> Valor 1\n", soma);
	
	soma = 0;
	
	for (i = 1; i < valor2; i++) {
		
		if (valor2 % i == 0) {
			
			soma += i;
			printf ("%d + ", i);
		}
	}
	printf ("= %d -> Valor 2\n", soma);
	
	soma = 0;
	
	for (i = 1; i < valor3; i++) {
		
		if (valor3 % i == 0) {
			
			soma += i;
			printf ("%d + ", i);
		}
	}
	printf ("= %d -> Valor 3\n", soma);
	
	soma = 0;
	
	for (i = 1; i < valor4; i++) {
		
		if (valor4 % i == 0) {
			
			soma += i;
			printf ("%d + ", i);
		}
	}
	printf ("= %d -> Valor 4\n", soma);
	
	soma = 0;
	
	for (i = 1; i < valor5; i++) {
		
		if (valor5 % i == 0) {
			
			soma += i;
			printf ("%d + ", i);
		}
	}
	printf ("= %d -> Valor 5\n", soma);
}

void ehPositivo (int valor1, int valor2, int valor3, int valor4, int valor5) {
	
	while (valor1 < 0) {
		
		printf ("Digite um numero valido para o primeiro valor: ");
		scanf ("%d", &valor1);
	}
	
	while (valor2 < 0) {
		
		printf ("Digite um numero valido para o segundo valor: ");
		scanf ("%d", &valor2);
	}
	
	while (valor3 < 0) {
		
		printf ("Digite um numero valido para o terceiro valor: ");
		scanf ("%d", &valor3);
	}
	
	while (valor4 < 0) {
		
		printf ("Digite um numero valido para o quarto valor: ");
		scanf ("%d", &valor4);
	}
	
	while (valor5 < 0) {
		
		printf ("Digite um numero valido para o quinto valor: ");
		scanf ("%d", &valor5);
	}
	
	SomaDivisores (valor1, valor2, valor3, valor4, valor5);
}

int main () {
	
	int valor1, valor2, valor3, valor4, valor5;
	
	printf ("Valor inteiro positivo: ");
	scanf ("%d", &valor1);
	
	printf ("Outro valor inteiro positivo: ");
	scanf ("%d", &valor2);
	
	printf ("Outro valor inteiro positivo: ");
	scanf ("%d", &valor3);
	
	printf ("Outro valor inteiro positivo: ");
	scanf ("%d", &valor4);
	
	printf ("Outro valor inteiro positivo: ");
	scanf ("%d", &valor5);
	
	ehPositivo (valor1, valor2, valor3, valor4, valor5);
	
	return 0;
}

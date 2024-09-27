#include <stdio.h>

float mediaHarmonica (float nota1, float nota2, float nota3) {
	
	return 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
}

float mediaPonderada (float nota1, float nota2, float nota3) {
	
	return ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
}

float mediaAritmetica (float nota1, float nota2, float nota3) {
	
	return (nota1 + nota2 + nota3) / 3;
}

int main () {
	
	float nota1, nota2, nota3;
	char letra;
	
	printf ("Nota 1: ");
	scanf ("%f", &nota1);
	
	printf ("Nota 2: ");
	scanf ("%f", &nota2);
	
	printf ("Nota 3: ");
	scanf ("%f", &nota3);
	
	printf ("Digite A para media aritmetica, P para media ponderada ou H para media harmonica: ");
	scanf (" %c", &letra);
	
	if (letra == 'A' || letra == 'a') {
		
		printf ("Media Aritmetica das notas: %.2f", mediaAritmetica (nota1, nota2, nota3));
		
	} else if (letra == 'P' || letra == 'p') {
		
		printf ("Media Ponderada das notas: %.2f", mediaPonderada (nota1, nota2, nota3));
		
	} else if (letra == 'H' || letra == 'h') {
		
		printf ("Media Harmonica das notas: %.2f", mediaHarmonica (nota1, nota2, nota3));
	}
 	
	return 0;
}

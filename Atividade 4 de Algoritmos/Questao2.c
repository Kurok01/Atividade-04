#include <stdio.h>
#include <math.h>

float distanciaEuclidiana (float x1, float y1, float x2, float y2) {
	
	float distancia;
	
	 distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	return distancia; 	
}

 

int main () {
	
	float x1, x2, y1, y2, distancia;
	
	printf ("Digite o valor de x1: ");
	scanf ("%f", &x1);
	
	printf ("Digite o valor de y1: ");
	scanf ("%f", &y1);
	
	printf ("Digite o valor de x2: ");
	scanf ("%f", &x2);
	
	printf ("Digite o valor de y2: ");
	scanf ("%f", &y2);
	
	distancia = distanciaEuclidiana(x1, y1, x2, y2);
	
	printf ("Distancia euclidiana entre os pontos (%.1f, %.1f) e (%.1f, %.1f) = %.2f", x1, y1, x2, y2, distancia);
	
	return 0;
}

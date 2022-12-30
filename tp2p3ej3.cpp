#include <stdio.h>
#include <math.h>

int X1, Y1, X2, Y2;
float resultado;

int main(){
	
	printf("Evaluamos la distancia entre 2 puntos \n");
	
	printf("Ingresar la abscisa (x) del primer punto: ");
	scanf("%d", &X1);
	printf("Ingresar la ordenada (y) del primer punto: ");
	scanf("%d", &Y1);
	printf("Ingresar la abscisa (x) del segundo punto: ");
	scanf("%d", &X2);
	printf("Ingresar la ordenada (y) del segundo punto: ");
	scanf("%d", &Y2);
	
	resultado= sqrt(pow(X2-X1, 2)+pow(Y2-Y1, 2));

	printf("Distancia: %f", resultado);

	
}

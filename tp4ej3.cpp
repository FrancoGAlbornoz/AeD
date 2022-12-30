#include <stdio.h>
#include <stdlib.h>

void calcMayMen (int May, int Men, int A1, int B1);
void areaCuad(int May, int &SupCua, int A1, int B1);
void areaCirc(int Men, int &SupCirc, int A1, int B1);

main(){
	
	int A, B;
	int May, Men, SupCua, SupCirc;
	
	printf("Problema 2\n");
	
	printf("Ingresar 2 numeros distintos.\n");
	
	printf("Ingrese el primer numero\n");
	scanf("%d",&A);
	printf("Ingrese el segundo numero\n");
	scanf("%d",&B);
	
	calcMayMen(May, Men, A, B);
	
	areaCuad(May, SupCua, A, B);
	printf("La superficie de un cuadrado calculada con los numeros ingresado es: %d\n",SupCua);
	
	
	areaCirc(Men, SupCirc, A, B);
	printf("La superficie de un circulo calculada con los numeros ingresado es: %d\n",SupCirc);
	
	
}

void calcMayMen(int May, int Men, int A1, int B1){
	May=0;
	Men=0;
	if(A1>B1){
		May=A1;
		Men=B1;
		printf("El numero ingresado mayor es: %d\n", May);
		printf("El numero ingresado menor es: %d\n", Men);
	}
	else if(B1>A1){
		May=B1;
		Men=A1;
		printf("El numero ingresado mayor es: %d\n", May);
		printf("El numero ingresado menor es: %d\n", Men);
	}
}

void areaCuad(int May, int &SupCua, int A1, int B1){
	May=0;
	
	if(A1>B1){
		May=A1; 
		SupCua=May*May;
	}
	else if(B1>A1){
		May=B1;
		SupCua=May*May;
	}
	
}

void areaCirc(int Men, int &SupCirc, int A1, int B1){
	Men=0;
	int pi=3.14;
	
	if(A1>B1){
		Men=B1; 
		SupCirc=B1*B1*pi;
	}
	else if(B1>A1){
		Men=A1;
		SupCirc=A1*A1*pi;
	}
	
	
}



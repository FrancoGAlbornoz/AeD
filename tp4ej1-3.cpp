#include <stdio.h>
#include <stdlib.h>

int datos(float V1[100]);

void buscar(float V1[100], int &encontrado, float x, int c);



main(){
	
	float V[100], x;
	int c, encontrado;
	
	printf("Cantidad de numeros que se ingresaron: %d\n", datos(V));
	

	printf("Ingrese valor a buscar: \n");
	scanf("%f", &x);
	
	buscar( V, encontrado, x, c);
	
	if(encontrado==0){
		printf("El valor ingresado no se encuentra en la lista de valores ingresados");
	}
	if(encontrado!=0){
		printf("Cantidad de veces que se repite ese valor es %d", encontrado);
	}
	
	
	
	
}

int datos(float V1[100]){
	
	int i=0, c1=0;
	
	
	printf("Ingrese un valor (para finalizar la carga ingrese 0): ");
	scanf("%f", &V1[i]);
	
	while(V1[i]!=0){
		i++;
		printf("Ingrese un valor (para finalizar la carga ingrese 0): ");
		scanf("%f", &V1[i]);
		c1++;
	}
	return c1;
	
	
}
void buscar(float V1[100], int &encontrado, float x, int c1){
	
	int i, cont=0;
	
	for(i=0; i<c1;i++){
		
		if(V1[i] == x){
			cont++;
		}
		
	}	
	encontrado= cont;
}

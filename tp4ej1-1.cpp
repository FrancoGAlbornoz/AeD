#include <stdio.h>
#include <stdlib.h>


void datos(int n1, int V1[100]);
void mostrar(int n1, int V1[100]);
int minn(int n1, int V1[100]);



main(){
	
	int n, V[100];
	 
	printf("Ingrese cantidad de numeros: ");
	scanf("%d",&n);
	
	datos(n,V);
	
	printf("El menor elemento es: %d \n", minn(n,V));
	
	mostrar(n,V);
	
	
	
}

void datos(int n1, int V1[100]){
	
	int i;

    for ( i = 0; i < n1; i++)
    {
        printf("Ingresar el numero entero Posicion->[%d]: ", i);
        scanf("%d", &V1[i]);
    }
	
	
}

int minn(int n1, int V1[100]){
	
	int i, men= V1[0];
	
	for (i = 0; i < n1; i++)
    {
        if(V1[i] < men){
        	men = V1[i];
		}
        
    }
	return men;
}

void mostrar(int n1, int V1[100]){
	
	int i;
	
	printf("Vector: \n");
	for ( i = 0; i < n1; i++)
    {
    	//printf("Vector: \n");
    	printf(" %d ", V1[i]);  
    }
	
	
	
}


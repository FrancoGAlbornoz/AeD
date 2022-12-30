#include <stdio.h>
#include <stdlib.h>

void mostrar(int n1, int V1[]);

main(){
	
	int n, ban, aux, i;
	int V[n];
	
	printf("Ingresar cantidad de elementos del vector: \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Ingrese elemento [%d] del vector: \n",i);
		scanf("%d",&V[i]);
	
	}
	
	printf("Elementos del vector son: \n");
	mostrar(n, V);
	
	//Asc
	do{
		ban=0;
		for(i=0;i<n-1;i++){
			if(V[i]>V[i+1]){
				
				aux=V[i];
				V[i]=V[i+1];
				V[i+1]=aux;
				ban=1;
				
			}
		}
	}while(ban==1);
	
	printf("\nElementos del arreglo ordenados en orden ascendente son: \n");
	mostrar(n, V);
	
	//Desc
	do{
		ban=0;
		for(i=0;i<n-1;i++){
			if(V[i]<V[i+1]){
				
				aux=V[i];
				V[i]=V[i+1];
				V[i+1]=aux;
				ban=1;
				
			}
		}
	}while(ban==1);
	
	printf("\nElementos del arreglo ordenados en orden descendente son: \n");
	mostrar(n, V);
		
}
void mostrar(int n1, int V1[]){
	
	for(int i=0;i<n1;i++){
		printf(" %d ", V1[i]);
	}
		
}

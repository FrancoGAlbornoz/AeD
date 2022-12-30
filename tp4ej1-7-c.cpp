#include <stdio.h>
#include <stdlib.h>

void mostrar(int n1, int V1[]);

main(){
	
	int i, aux;
	int v1[10];
	int v2[10];
	int v3[10];
	
	printf("Ingrese 10 elementos para el vector 1-");
	for(i=0; i<10;i++){
		printf("Ingrese elemento [%d] del arreglo: \n",i+1);
		scanf("%d",&v1[i]);
		
	}
	printf("Los elementos del arreglo A son: ");
	mostrar(10, v1);
	
	printf("Vector 2- Potencia de Vector 1");
	
	for(i=0;i<10; i++){
		int n=i;
		v2[i]=v1[i];
		/*hile, hace que recorra todo el vector hasta que n sea igual a 1, 
		osea recorra todo el vector n hasta la primera posicion.*/
		while(n>1){
			v2[i]=v2[i]*i
			n--;
		}
		v2[0]=1;
		v2[1]=v1[1];
		
	}
	printf("\n Los elementos del Vector 2 son: ");
	
	for(int i=0;i<10;i++){
		
		printf("%d  ", v2[i]);
		
	}
	printf("Vector 3- Suma de Vector 1 y Vector 2");
	for(int i=0;i<10;i++){
		
		v3[i] = v1[i] + v2[i];
		
	}
	
	printf("\n Los elementos del Vector 3 son: ");
	
	for(int i=0;i<10;i++){
		
		printf("%d  ", v3[i]);
		
	}
	
}
void mostrar(int n1, int V1[]){
	
	for(int i=0;i<n1;i++){
		printf(" %d ", V1[i]);
	}
		
}

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int cargarMatriz(int Mat[10][10], int m, int n);
void mostrarMatriz(int Mat[10][10], int m, int n);
void traspuesta(int Mat[10][10], int m, int n);


main(){
	
	int m,n;
	int Mat[10][10];
	
	printf("Ingresar valores distintos para M y N\n");

	
	do{
		
		
		printf("Ingrese el valor de filas: ");
		scanf("%d", &m);
		printf("Ingrese el valor de columnas: ");
		scanf("%d", &n);
		
		
	}while(m==n);
	
	cargarMatriz(Mat,m,n);
	mostrarMatriz(Mat,m,n);
	
	printf("\n\nMatriz transpuesta: ");
	traspuesta(Mat, m, n);
	mostrarMatriz(Mat,m,n);
	
	
}

int cargarMatriz(int Mat[10][10], int m, int n){
	
	srand(time(NULL));
	
	int i,j;
	
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			Mat[i][j]= 1+(rand()%500);
		}
		
	}
	
	
}

void mostrarMatriz(int Mat[10][10], int m, int n){
	
	int i, j;
	
	for(i=0;i<m;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("-%d-",Mat[i][j]);
			
		}
		printf("\n");
	}
	
}

void traspuesta(int Mat[10][10], int m, int n){
	
	int i,j, aux;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i != j){
				aux=Mat[i][j];
				Mat[i][j]=Mat[j][i];
				Mat[j][i]=aux;
			}
		}
	}
	
	
}



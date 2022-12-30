#include <stdlib.h>
#include <stdio.h>

void cargarArreglo(int A[10][10][10], int m, int n, int p);
void mostrarArreglo(int A[10][10][10], int m, int n, int p);
int mayorVP(int A[10][10][10], int m, int n, int p);
void totalV(int A[10][10][10], int m, int n, int p);


main(){
	
	int p=3, m=2, n=4, A[10][10][10];
	
	cargarArreglo(A,m,n,p);
	mostrarArreglo(A,m,n,p);
	printf("Pais con mayor venta pais numero: %d", mayorVP(A,m,n,p));
	totalV(A,m,n,p);
	
	
}
void cargarArreglo(int A[10][10][10], int m, int n, int p){
	
	int i,j,k;
	
	for(k=0;k<p;k++){		
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("Ingresar elementos: [%d][%d][%d]\n",i+1,j+1,k+1);
				scanf("%d",&A[i][j][k]);
			}
		}
	}
	
}

void mostrarArreglo(int A[10][10][10], int m, int n, int p){
	
	int i,j,k;
	
	for(k=0;k<p;k++){
		printf("\nPais Numero %d\n", k+1);		
		for(i=0;i<m;i++){
			printf("\n");
			for(j=0;j<n;j++){
				
				printf("[%d] ", A[i][j][k]);
			}
			
		}
		
	}
	
}
int mayorVP(int A[10][10][10], int m, int n, int p){
	
	int i,j,k, acc, pais, mayorV=0;
	
	for(k=0;k<p;k++){	
		acc=0;	
		for(i=0;i<m;i++){
			
			for(j=0;j<n;j++){
				
				acc=acc+A[i][j][k];
				pais=k;
				
			}
			if(acc > mayorV){
				mayorV=acc;
				pais=k;
			}
		}
	}
	return pais;
	
	
}

void totalV(int A[10][10][10], int m, int n, int p){

	int acc;
	for(int k = 0; k < p; k++){
		acc = 0;
		printf("Plano %d: \n", k);
			for(int i = 0; i < m; i++){
				for(int j = 0; j < n; j++){
					acc = acc + A[k][i][j];
				}
				printf("Sucursal con mayor venta %d: %d", i, acc);
				printf("\n");
				acc = 0;
			}
		}
}




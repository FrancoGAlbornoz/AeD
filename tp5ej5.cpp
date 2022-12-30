#include <stdlib.h>
#include <stdio.h>

void cargarArreglo(int A[10][10][10], int m, int n, int p);
void mostrarArreglo(int A[10][10][10], int m, int n, int p);
void sumaArreglo(int A[10][10][10], int &m, int &n, int &p, int V[10]);
void llenarV(int V[10], int p, int acc);
void mostrarV(int V[10], int p);
float promV(int vector[10], int &k);
int sumaV(int vector[10], int k);



main(){
	
	int p,m,n, A[10][10][10], V[10];
	printf("Ingrese p (planos): "); 
	scanf("%d", &p);
	printf("Ingrese m (filas): "); 
	scanf("%d", &m);
	printf("Ingrese n (columnas): "); 
	scanf("%d", &n);
	
	cargarArreglo(A,m,n,p);
	mostrarArreglo(A,m,n,p);
	
	sumaArreglo(A, m, n, p, V);
	printf("\nVector de la suma de planos: ");
	mostrarV(V, p);
	
	float promedio = (float) promV(V, p);
	printf("\n\nEl promedio es %.2f", promedio);
	
	
	
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
		printf("\nPlano: %d\n", k+1);		
		for(i=0;i<m;i++){
			printf("\n");
			for(j=0;j<n;j++){
				
				printf("[%d] ", A[i][j][k]);
			}
			
		}
		
	}
	
}
void sumaArreglo(int A[10][10][10], int &m, int &n, int &p, int V[10]){
	
	int acc, i,j,k;
	
	for(k=0;k<p;k++){
			acc=0; //para que no sume los planos.
		for(i=0;i<m;i++){
			
			for(j=0;j<n;j++){
				acc=acc+A[i][j][k];
			}
		}
		llenarV(V, k, acc);
	}
	
	
}

void llenarV(int V[10], int k, int acc){
	
	V[k]=acc;
	
}
void mostrarV(int V[10], int p){
	
	for(int i = 0; i < p ; i++){
		printf("{ %d = [%d] } || ", i,V[i]);
	}
}
float promV(int V[10], int &p){
	
	float prom=0;
	int suma= sumaV(V,p);
	prom= suma/p;
	return prom;
	
}

int sumaV(int V[10], int p){
	int acc=0;
	for(int i = 0; i < p; i++){
		acc = acc+ V[i];
	} 
	return acc;
}

 

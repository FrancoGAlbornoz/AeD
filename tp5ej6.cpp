#include <stdlib.h>
#include <stdio.h>

void cargarArreglo(int A[10][10][10], int m, int n, int p);
void mostrarArreglo(int A[10][10][10], int m, int n, int p);
int menor(int A[10][10][10], int m, int n, int p);
int menorPar(int A[10][10][10], int m, int n, int p);



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
	printf("\nMenor: %d\n",menor(A, m, n,  p));
	
	menorPar(A,m,n,p);

	
	
	
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

int menor(int A[10][10][10], int m, int n, int p){
	
	int menor, num=0,i,j,k;
	
	for(k=0;k<p;k++){
				
		for(i=0;i<m;i++){
			
			for(j=0;j<n;j++){
				num=A[i][j][k];
				if(menor>num){
					menor=num;
				}
				
			}
			
		}
		
	}
	return menor;
	
}
int menorPar(int A[10][10][10], int m, int n, int p){
	
	int menorP= menor(A,m,n,p);
	
	printf("\n");
	
	printf("El menor valor es: %d", menorP);
	if(menorP % 2 == 0){
		printf("\nEl menor valor es par.");
	}else{
		printf("\nEl menor valor es impar.");
	}
	
	
	
}


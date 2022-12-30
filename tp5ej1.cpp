#include<stdio.h>
#include<stdlib.h>

void cargaMatriz(int M[4][3]);
int may_men(int M[4][3], int &menor, int mayor);
void mostrarMatriz(int M[4][3]);

main(){
	
	int M[4][3];
	int m=4, n=3, men;
	
	cargaMatriz(M);
	mostrarMatriz(M);
	
	int mayor = may_men(M, men, mayor);
	
	printf("\nEl elemento mayor es: %d ", mayor);
	printf("\nEl elemento menor es: %d ", men);
	
	printf("\n\n");
	
	
	
}
void cargaMatriz(int M[4][3]){
	
	int i, j;
	
	for(i=0; i<4;i++){
		for(j=0;j<3;j++){
			
			printf("Ingresar elementos-[%d][%d]-: ",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
	}
	
	
	
}

void mostrarMatriz(int M[4][3]){
	for(int i = 0; i < 4; i++){
			printf("\n\n");
		for(int j = 0; j < 3; j++){
			printf(" %d ", M[i][j]);
		}
	}
}



int may_men(int M[4][3], int &menor, int mayor){
	
	int aux=0,i,j;
	
	for(i=0; i<4;i++){
		for(j=0;j<3;j++){
			
			aux=M[i][j];
			
			if(mayor<M[i][j]){
				mayor=M[i][j];
			}
			if(menor>M[i][j]){
				menor=M[i][j];
			}
			
		}
	}
	return mayor;
	
}


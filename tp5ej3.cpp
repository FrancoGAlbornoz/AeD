#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cargarMatriz(int Mat[10][10], int m, int n);
void mostrarMatriz(int Mat[10][10], int m, int n);
int calcular(int Mat[10][10], int m, int n);

main(){
	
	int m, n, Mat[10][10];
	n=3;//camisas,pant,remeras
	
	printf("Ingrese la cantidad de talleres: "); 	
	scanf("%d", &m);
	
	
	cargarMatriz(Mat,m,n);
	mostrarMatriz(Mat, m, n);
	
	
	
	printf("\n\nLa sucursal con mayor cantidad de produccion fue el %d", calcular(Mat,m,n) );
	
	
	
}
int cargarMatriz(int Mat[10][10], int m, int n){
	
	srand(time(NULL));
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			Mat[i][j] =  1+(rand()%500);
		}
	}
}
void mostrarMatriz(int Mat[10][10], int m, int n){
	
	for(int i = 0; i < m; i++){
		printf("\n");
		for(int j = 0; j < n ; j++){
			printf(" %d ", Mat[i][j]);
		}
		printf("\n");
	}
}

int calcular(int Mat[10][10], int m, int n){
	
	int suma, max;
	int indice = 0;
	
	for(int i = 0; i < m; i++){
		suma =0;
		for(int j = 0; j < n; j++){
			
			suma = suma + Mat[i][j];
			
			if(suma > max){
				max = suma;
				indice = i;
			}
		}
	}
	
	return indice;
}

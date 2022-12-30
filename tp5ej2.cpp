#include <stdio.h>
#include <stdlib.h>

void cargaMatriz(int Mat[25][25], int m, int n);
void mostrarMatriz(int Mat[25][25], int m, int n);
void cero(int Mat[25][25], int m, int n);
void mostrarFila(int Mat[25][25], int m, int n);
void mostrarcolumna(int Mat[25][25], int m, int n);

main(){
	int Mat[25][25];
	int m=0, n=0, numFila, numColumna;
	
	printf("Ingrese m: "); 
	scanf("%d", &m);
	printf("Ingrese n: "); 
	scanf("%d", &n);
	
	cargaMatriz(Mat,m,n);
	mostrarMatriz(Mat,m,n);
	cero(Mat, m, n);
	mostrarMatriz(Mat,m,n);
	
	printf("\n\nIngrese el numero de fila que desea mostrar: ");
	scanf("%d", &numFila);
	
	
	printf("\n\nIngrese el numero de columna que desea mostrar: ");
	scanf("%d", &numColumna);
	
	
	
}

void cargaMatriz(int Mat[25][25], int m, int n){
	
	int i,j, num;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			printf("Ingrese [%d][%d]: ", i,j);
			scanf("%d", &num);
			
			if(num>0){
				Mat[i][j]=num;
			}else{
				do{
					printf("\n Numero ingresado negativo o 0. Ingrese nuevamente\n");
					printf("Ingrese [%d][%d]: ", i,j);
					scanf("%d", &num);
				}while(num<0);
			}
			
		}
			
	}
	
}
void mostrarMatriz(int Mat[25][25], int m, int n){
	
	int i,j;
	printf("Matriz.\n");
	
	for(i=0;i<m;i++){
		printf("\n");
		for(j=0;j<n;j++){
			
			printf("%d ", Mat[i][j]);
							
		}	
		printf("\n");
	}
	
}
void cero(int Mat[25][25], int m, int n){
	
	int f0, c0;
	
	printf("\nCambiar un valor de la matriz por un 0.\n");
	printf("Matriz de %d x %d\n",m,n);
	
	printf("Ingrese valores segun corresponda. Filas y columnas\n");
	printf("Fila: ");
	scanf("%d",&f0);
	printf("Columna: ");
	scanf("%d",&c0);
	printf("Posicion del elemento a cambiar-> Fila[%d],Columna[%d]\n", f0,c0);
	
	Mat[f0][c0]=0;
	
}
//FALTA MOSTRAR FILA Y COLUMNA



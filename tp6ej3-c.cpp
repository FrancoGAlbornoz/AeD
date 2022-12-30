#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef char cadena[50];
cadena V[45];

void cargaV(cadena V[45], int A[30], int n);
void cargaVAlumnos(int A[30], int i);
int mayorIns(int A[30],int n);

//--------CONSULTA!

main(){
	
	int n;
	int A[30];
	
	printf("Ingrese la cantidad de asignaturas: ");
    scanf("%d",&n);
	cargaV(V, A, n);
	int mayor= mayorIns(A,n);
	
	printf("\nEl maximo de inscriptos es de %d de la asignatura.", mayor/*mayorIns(A,n)*/);
	
		
}
void cargaVAlumnos(int A[30], int i){
	
	int cA;
	
	printf("Ingrese cantidad de alumnos: \n");
	scanf("%d",&cA);
	
	A[i]=cA;
	printf(" ---- \n");
	
	
	
}
void cargaV(cadena V[45], int A[30], int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("Ingrese nombre de Asignatura: \n");
		_flushall();
		gets(V[i]);
		cargaVAlumnos(A,i);
		
	}
	
	
}

int mayorIns(int A[30],int n){
	
	int ind=0, max=0, num;
	
	for(int i=0; i<n;i++){
		
		num=A[i];
		if(num>max){
			max=num;
			ind=i;
		}
		
	}
	return ind;
	
	
	
	
}


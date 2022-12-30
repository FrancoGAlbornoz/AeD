#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void datos(int V1[100]);

int mult(int V1[100]);

void mostrar(int V1[100]);

main(){
	int V1[100];
	
	datos(V1);
			
	printf("La cantidad de multiplos hallados es de %d \n", mult(V1));
	
	mostrar(V1);
	
}

//---------- ??

void datos(int V1[100]){
	
	srand(time(NULL));
	for(int i=0;i<100;i++){
		V1[i]= 1 + rand()%(432+1-1);//n° aleatorios entre 432-1
	}
	
}


//--------- 

int mult(int V1[100]){
	
	int K, cmult;
	
	printf("Ingrese el valor del que desea saber sus multiplos: \n");
	scanf("%d", &K);
	
	for(int i=0; i<100;i++){
		
		if(V1[i]%K==0){
			
			cmult++ ;
		}
	}
	return cmult;
}

//-----------
void mostrar(int V1[100]){
	for(int i=0;i<100;i++){
		printf("[%d] -> ", V1[i]);
	}
}


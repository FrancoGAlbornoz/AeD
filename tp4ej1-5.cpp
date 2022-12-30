#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main(){
	
	int V[100], n,i, cI=0,cP=0,pP=0,pI=0;
	float promP, sumaP=0,sumaI=0, promI,
		
	srand(time(NULL));
	
	for(i=0;i<100; i++){
		V[i]= 1+rand()%(100+1-1); //n° aleatorios de 0 a 100
	}
	
	for(i=0;i<100;i++){
		printf("%d - ", V[i]);
	}
	
	//suma pares, impares, contadores.
	for(i=0; i<100; i++){
		
		if(V[i]%2==0){
			sumaP=sumaP+V[i];
			cP++;
		}else{
			sumaI=sumaI+V[i];
			cI++;
			
		}
				
	}
	
	promP=(float)sumaP/cP;
	promI=(float)sumaI/cI;
	
	for(i=0; i<100;i++){
		
		if(i%2==0){
			pP=pP+V[i];
		}else{
			pI=pI+V[i];
		}
	}
	
	printf("\n Promedio de los valores pares es %.2f", promP);
	
	printf("\n Promedio de los valores impares es %.2f", promI);
	
	printf("\n Suma de los valores en posiciones pares es de %d", pP);
	
	printf("\n Suma de los valores en posiciones impares es de %d", pI);
}

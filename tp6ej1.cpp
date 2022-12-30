#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char cadena[50];
cadena V[25];
	

main(){
	
	int contP=0, ban=0;
	char cad[10]="final";
	int longP1, longP2, max=0, indice;
	
	while(ban==0){
		printf("Ingrese palabra %d en el vector.\n", contP+1);
		_flushall();
		gets(V[contP]);
		contP++;
		int comparacion= 0;
		for(int i=0;i<contP;i++){
			
			comparacion= strcmp(V[i],cad);
			//si la comparacion es igual devolvera 0. si es 0 bandera igual a 1.
			
			if(comparacion==0){
				ban=1;
				contP++;
			}
		}
	}
	
	for(int i =0; i<contP;i++){
		
		longP1= strlen(V[i]);
		longP2= strlen(V[i+1]);
		
		if(longP1> longP2){
			max=longP1;
			indice=i;
		}
		
		
	}
	
	printf("\n\nEl maximo total es de: %d y la palabra es: %s", max, V[indice]);
	printf("\n\nSe ingresaron un total de: %d palabras antes de la ultima palabra", contP);
	
	
}

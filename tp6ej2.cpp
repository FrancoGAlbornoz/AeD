#include <string.h>
#include <stdlib.h>
#include <stdio.h>



void mostrarPalabras(char cadena[100], int &save);
void mosrtarFila(char cadena[100], int indice, int iAnterior, int &save);
int longCadena(char cadena[100]);

main(){
	
	
	char cadena[100];
	int save=0;
	
	printf("Ingrese nombres separados por coma.\n");
	gets(cadena);
	
	mostrarPalabras(cadena, save);
	
	printf("\n\nLa longitud de la cadena es: %d", longCadena(cadena));
	
	
}
void mostrarFila(char cadena[100], int indice, int iAnterior, int &save){
	
	for(int i = iAnterior; i < indice; i++){
		if(cadena[i] == ',' || cadena[i] == ' ,' || cadena[i] == ', ' || cadena[i] == ' '){ 
			printf(""); 
		}else{
			printf("%c", cadena[i]); 
		}		
	}
	printf("\n");	
	
	
}

void mostrarPalabras(char cadena[100], int &save){
	
	int iActual=0;
	int iAnterior=1;
	
	for(int i=0; i<100; i++){
		if(cadena[i]== ','){
			iActual=i;
			
			mostrarFila(cadena, iActual, iAnterior, save);
			iAnterior=iActual;
			
		}
		if(cadena[i] == '\0'){
			i=100;
		}
	}
}

int longCadena(char cadena[100]){
	
	int cont=0;
	for(int i =0; i<100;i++){
		
		if(cadena[i]=='\0'){
			i=100;
			cont--;
		}
		cont++;
		
		
	}
	return cont;
	
	
}



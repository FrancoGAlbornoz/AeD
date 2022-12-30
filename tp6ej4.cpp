#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int contarVE(char poema[200], int &espacios, int &caracteres);
int contarC(char poema[200]);



main(){
	char poema[200];
	
	int contC=0, espacios=0, vocales=0, consonantes;
	
	printf("Ingresar poema:\n");
	gets(poema);
	
	contC= contarC(poema);
	
	vocales = contarVE(poema, espacios, contC);
	
	consonantes= contC-vocales-espacios;
	
	
	printf("Cantidad de caracteres en el poema: %d\n", contC);
	printf("Hay un total de %d consonantes. \n", consonantes);
    printf("Hay un total de %d vocales. \n", vocales);
	
	
	
}
int contarC(char poema[200]){
	
	int i, caracteres=0;
	
	for(i=0;i<200;i++){
		caracteres++;
		if(poema[i] == '\0'){
			caracteres--;
		}
	}
	return caracteres;
	
}

int contarVE(char poema[200], int &espacios, int &caracteres){
	
	int vocales=0;
	espacios=0;
	
	for(int i=0; i<caracteres;i++){
		if(poema[i] == 'a' || poema[i] == 'e' || poema[i] == 'i' || poema[i] == 'o' || poema[i] == 'u'){
            vocales++;
        }if(poema[i] == ' '){
        	espacios++;
		}
		
	}
	return vocales;	
	
}

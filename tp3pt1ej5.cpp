#include <stdio.h>
using namespace std;

main(){
    printf("Problema 5\n\n ");

    int notaN, edad;


    printf("Ingresar la nota niveladora del alumno: \n");
    scanf("%d",&notaN);
    printf("Ingresar la edad del alumno: \n");
    scanf("%d",&edad);
    
    if(notaN>10 or notaN<0){
    	
    	printf("Ingrese una nota del 1 al 10. El programa finalizara.");
    	
	}else{
		
		if(notaN>=6 and notaN<=10){
        	printf("Aprobo el examen.");
        if(edad<=10){
            printf("El alumno ira al curso 1. Division A");
        }
        if(edad>=10 and edad<=20){
            printf("El alumno ira al curso 2. Division A");
        }
        if(edad>20){
            printf("El alumno ira al curso 3. Division A");
        }
        
    	}else{
        	printf("DEsaprobo el examen.");
        	if(edad<=10){
            	printf("El alumno ira al curso 1. Division B");
        	}
        	if(edad>=10 and edad<=20){
            	printf("El alumno ira al curso 2. Division B");
        	}
        	if(edad>20){
            	printf("El alumno ira al curso 3. Division B");
        	}
    	}
	}
    
        


}

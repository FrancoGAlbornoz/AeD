#include <stdio.h>
#include <stdlib.h>

int Opc, N;
int c=0; 
float m1,m2, resm, d1,d2, resd,r1,r2,r3,r4,r5,resr1, resr2, resr3,resr4, s1, ress;

main(){
	
	do{
		
		printf("Menu de opciones\n");
		
		printf("1- Multiplicar 2 numeros. \n");
		printf("2- Dividir 2 numeros. \n");
		printf("3- Restar 5 numeros. \n");
		printf("4- Sumar N numeros. \n");
		printf("5- Salir del programa. \n");
		printf("Elija la opcion: \n\n");
		scanf("%d", &Opc);
		
		
		switch(Opc){
			
			case 1:
				printf("Ingrese 2 numeros para multiplicar \n");
				printf("Numero 1: ");
				scanf("%f",&m1);
				printf("Numero 2: ");
				scanf("%f",&m2);
				
				resm=m1*m2;
				
				printf("Resultado: %2.f \n", resm);
				break;
				
				
			case 2:
				printf("Ingrese 2 numeros para dividir \n");
				printf("\nNumero 1: ");
				scanf("%f",&d1);
				printf("\nNumero 2: ");
				scanf("%f",&d2);
				
				resd=d1/d2;
				
				printf("Resultado: %2.f \n", resd);
				break;
				
			case 3:
				printf("Ingrese 5 numeros para restar \n");
				printf("\nNumero 1: ");
				scanf("%f",&r1);
				printf("\nNumero 2: ");
				scanf("%f",&r2);
				printf("\nNumero 3: ");
				scanf("%f",&r3);
				printf("\nNumero 4: ");
				scanf("%f",&r4);
				printf("\nNumero 5: ");
				scanf("%f",&r5);
				
				resr1=r1-r2;
				resr2=resr1-r3;
				resr3=resr2-r4;
				resr4=resr3-r5;
				
				printf("Resultado: %2.f \n", resr4);
				break;
				
			case 4:
				printf("Sumamos N cantidad de numeros \n");
				printf("Introduce la cantidad de numeros a sumar\n");
				
				scanf("%d",&N);
				
				for(c=1;c<=N;c++){
					
					printf("Ingresar los numeros que deseas sumar \n");
					scanf("%f",&s1);
					
					ress=ress+s1;	
			
					
				}
				printf("La suma de todos los numeros ingresados es: %f \n\n", ress);
				break;
				
			case 5:
				printf("Saliste del menu");
				break;
			
		}
		
	}while(Opc!=5);
	
	
}

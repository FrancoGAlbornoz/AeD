#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int c=0;
float num, dig;
int N, aux, potencia, binario;

main (){
		
	printf("--Mostramos el binario de un numero entero positivo--\n");
	printf("\nIngrese la cantidad de numeros a evaluar: ");
	scanf("%d",&N);
	
	for(c=1;c<=N;c++){
		
		printf("\nIngrese un numero entero y positivo a evaluar: "); 
		scanf("%f",&num);
		aux=num;
		
		while(num-aux or num<0){
		printf("\nEl numero no es valido. Ingrese un numero entero y positivo a evaluar: "); 
		scanf("%f",&num);
		aux=num;
		
		}
		binario=0;
		potencia=0;
	
		for(int i=num;i>0;i=i/2){
		
		dig=i%2;
		binario=binario+dig*pow(10,potencia);
		potencia++;
		
		}
		printf("\n El numero %.0f en binario es: %ld \n\n",num, binario);
		system("pause");
		
	}
	

	
	
	
}


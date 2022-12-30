#include <stdio.h>
#include<stdlib.h>

int n, cont25, cont12, cont1928;


main(){
	cont25=0;
	cont12=0;
	cont1928=0;
	
	
	printf("Evaluamos ciertos numeros.\n");
	
	do{
		
		printf("Ingrese el numero: ");
		scanf("%d",&n);
		
		
		if(n<25 and n!=0){
		cont25++;
		}
		if(n>12){
		cont12++;
		}
		
		if(n>19 and n<28){
		cont1928++;	
		}
		
		printf("Para finalizar ingrese 0. \n");
	
	}while(n!=0);
	

	
	printf("numeros menores que 25 %d \n", cont25);
	printf("numeros mayores que 12 %d \n", cont12);
	printf("numeros entre 19 y 28 %d \n", cont1928);

	
	
}

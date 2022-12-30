#include <stdio.h>
#include <stdlib.h>

int regalo, edad, regalototal;

main(){
	edad=12;
	regalo=10;
	regalototal=10;
	printf("Programa edad y regalo.\n\n");
	
	do{
		
		edad++;
		regalo=regalo*2;
		regalototal=regalototal+regalo;
		
		
	}while(regalototal<1000);
	
	printf("Su edad sera de:  %d \n", edad);	
	printf("Se le regalara: %d \n", regalo);	
	printf("El total del regalo: %d \n", regalototal);
	

}



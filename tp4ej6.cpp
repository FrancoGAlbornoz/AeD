#include <iostream>
#include <stdio.h>

int cuadrado( int numero);

main()
{
  int numero = 0;

        
        printf("Ingrese numero: \n");
        scanf("%d",&numero);
        
        printf("El cuadrado del numero : %d es: %d" ,numero ,cuadrado(numero));
    

    return 0;
}

int cuadrado( int numero){

   if ( numero != 0){
      return ( 2*numero - 1) + cuadrado(numero - 1);
   }
}
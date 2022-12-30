#include <stdio.h>
#include <stdlib.h>

int division( int a, int b);

main(){

    int a, b;

    printf("Problema 2 Recursividad. \n");
    printf("Division A/B. \n");

    printf("Ingresar A\n");
    scanf("%d", &a);
    printf("Ingresar B\n");
    scanf("%d", &b);

    printf("La division  entre %d, y %d es: %d" ,a,b, division(a,b));


}
int division( int a1, int b1){

    if(b1>a1){
        return 0;
    }else{
    	return division(a1-b1,b1)+1;
	}


}

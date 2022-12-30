#include <stdlib.h>
#include <stdio.h>

int producto(int a1, int b1);

main(){

int a, b, p;

printf("Problema 1 Recursividad. \n");
printf("Producto A*B. \n");

printf("Ingresar A\n");
scanf("%d", &a);
printf("Ingresar B\n");
scanf("%d", &b);

printf("El producto entre %d y %d es: %d" ,a,b, producto(a,b));


}

int producto(int a1, int b1){

    if(b1==1) return a1;
    if (b1>0){
    	return a1+producto(a1,b1-1);
    	
	}else{
		return -a1+producto(a1,b1+1);
	} 
	
	return (0);
}

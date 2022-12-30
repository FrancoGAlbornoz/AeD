#include <stdio.h>
#include <stdlib.h>

void suma(float x1, float &acc);

main(){

    int num;
    float x=0, acc=0;

    printf("Problema 4\n");

    printf("Ingresar cantidad de numeros. Seran sumados. \n");
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++)
    {
        printf("Ingresar numeros a sumar.\n");
        scanf("%f",&x);
        suma(x,acc);
        
    }
	
	
	printf("SUMA: %.2f \n", acc );


}

void suma(float x1, float &acc){
	
	acc=acc+x1;
    
}

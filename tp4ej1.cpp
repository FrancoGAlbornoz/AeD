#include <stdio.h>
#include <stdlib.h>

void intervalo (float inter1, float inter2 );

main(){
	
    float inter1, inter2;

	printf("Problema 1\n");
        
    printf("Ingresar los limites del intervalo: \n");

    printf("Intervalo inicial: \n");
    scanf("%f", &inter1);
    printf("Intervalo final: \n");
    scanf("%f", &inter2);
	
    intervalo(inter1, inter2);
    

}

void intervalo (float inter1F, float inter2F ){
	
    int num, dentro=0, fuera=0;
    float x;
    
    printf("Ingresar la cantidad N de numeros a evaluar: \n");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
	    printf("Ingresar numeros reales a evaluar. \n");
        scanf("%f", &x);
	
        if(x >= inter1F && x<= inter2F){
            dentro++;
        }else{
            fuera++;
        }
    }
    
    printf("\nCantidad  de puntos dentro del intervalo: %d", dentro);
	printf("\nCantidad  de puntos fuera del intervalo: %d", fuera);
	
}

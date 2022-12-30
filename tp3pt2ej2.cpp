#include <stdio.h>
#include <stdlib.h>


main(){

int codArt, salida=1, cont1, cont2, cont3;
float montoV, prcnt1, prcnt2, prcnt3, montoT, t1, t2, t3;

while(salida!=0){
	
	printf("Ingrese codigo de articulo \n");
    scanf("%d",&codArt);
    
    if (codArt == 1 || codArt == 2 || codArt == 3)
    {
        printf("Ingresa el monto de venta del articulo. \n");
        scanf("%f",&montoV);
        montoT=montoT+montoV;
        if(codArt==1){
        	t1=t1+montoV;
        	cont1=cont1+1;
        }
        if(codArt==2){
        	t2=t2+montoV;
        	cont2=cont2+1;
        }
        if(codArt==3){
        	t3=t3+montoV;
        	cont3=cont3+1;
        }
    }else{
        printf("Codigo ingresado invalido \n");
    }
    
    printf("Para finalizar ingrese 0. Para continuar ingrese cualquier numero.");
    scanf("%d",&salida);
    
    
	}
	
	if(t1>t2 && t1>t3){
    	printf("La venta mayor es de articulo 1. Su venta fue de: %2.f  \n", t1);
    	
    }
    if(t2>t1 && t2>t3){
    	printf("La venta mayor es de articulo 2. Su venta fue de: %2.f  \n", t2);
    	
    }
    if(t3>t1 && t3>t2){
    	printf("La venta mayor es de articulo 3. Su venta fue de: %2.f  \n", t3);
    	
    }
    
    printf("El total vendido por articulo 1 es: %f \n", t1);
    printf("El total vendido por articulo 2 es: %f \n", t2);
    printf("El total vendido por articulo 3 es: %f \n", t3);
    
    
    montoT=t1+t2+t3;
    
    prcnt1= (t1*100)/montoT;
    prcnt2= (t2*100)/montoT;
    prcnt3= (t3*100)/montoT;
    
    
    
	printf("Porcentaje de art 1: %2.f %\n", prcnt1);
	printf("Porcentaje de art 2: %2.f %\n", prcnt2);
	printf("Porcentaje de art 3: %2.f %\n", prcnt3);


}

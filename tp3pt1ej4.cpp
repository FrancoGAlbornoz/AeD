#include <stdio.h>
using namespace std;

main(){
    printf("Problema 4\n\n ");

    float pKilo1, cKilo1, pKilo2, cKilo2, pKilo3, cKilo3, p1, p2, p3, total, totalF, descuento;

    printf("Ingrese el precio por kilo del producto 1\n\n ");
    scanf("%f",&pKilo1);
    printf("Ingrese la cantidad en kilos del producto 1\n\n ");
    scanf("%f",&cKilo1);
    printf("Ingrese el precio por kilo del producto 2\n\n ");
    scanf("%f",&pKilo2);
    printf("Ingrese la cantidad en kilos del producto 2\n\n ");
    scanf("%f",&cKilo2);
    printf("Ingrese el precio por kilo del producto 3\n\n ");
    scanf("%f",&pKilo3);
    printf("Ingrese la cantidad en kilos del producto 3\n\n ");
    scanf("%f",&cKilo3);

    p1=pKilo1*cKilo1;
    p2=pKilo2*cKilo2;
    p3=pKilo3*cKilo3;

    total=p1+p2+p3;

    if(total>=1000){
        descuento=total*0.05;
        printf("Recibira descuento del 5%\n\n ");
        printf("Descuento $ %2.f\n\n ", descuento);
        totalF=total-descuento;
        printf("Total a pagar con el descuento $ %2.f\n\n ", totalF);
    }else{
    	printf("No recibe descuento. Total a pagar $ %2.f\n", total);
	}

    

}

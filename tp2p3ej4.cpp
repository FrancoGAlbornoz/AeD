#include <stdio.h>


int mesesn, c;
float totVentaMes, totGastosMes, ingresoTVentas, IngresoT;
float netoMes=0;
main(){
	
	printf("Evaluar ganancia y perdidas de una empresa en x cantidad de meses \n");
	printf("Ingresar la cantidad de meses a evaluar: ");
	scanf("%d", &mesesn);
	c=0;
	
	while(c<mesesn){
		
		
		
		printf("Ingrese el total de ventas del mes N' %d : ",c+1);
		scanf("%f",&totVentaMes);
		
		printf("Ingrese el total de gasto del mes N' %d : ",c+1);
		scanf("%f",&totGastosMes);
		
		while(totVentaMes< 0 or totGastosMes<0){
			
			printf("Ingreso valores negativos. Ingrese nuevamente.");
			
			printf("Ingrese el total de ventas del mes N' %d : ",c+1);
			scanf("%f",&totVentaMes);
		
			printf("Ingrese el total de gasto del mes N' %d : ",c+1);
			scanf("%f",&totGastosMes);
			
			
		}
		
		netoMes=totVentaMes-(totVentaMes*0.05)-totGastosMes;
		IngresoT=IngresoT+netoMes;
		
		c++;
		
	}
	
	if(IngresoT>0){
		
		printf("\n --El negocio tuvo ganancias. \n El monto es de %2f",IngresoT);
		
	}
	else if (IngresoT<0){
		printf("\n --El negocio tuvo perdidas. \n El monto es de %2f",IngresoT);
		
	}
	else{
		printf("\n El negocio no tuvo perdidas ni ganancias.");
	}



	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

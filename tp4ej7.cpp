#include <stdio.h>

float pasarHora(float valor);

float pasarMin(float valor);

float pasarSeg(float valor);

float pasarHora(float valor){
	float hora=0.0;
	hora=valor/60;
	return hora;
	
	
}
float pasarMin(float valor){
	float min=0.0;
	min=valor*1;
	return min;
	
}
	
float pasarSeg(float valor){
	float seg=0.0;
	seg=valor*60;
	return seg;
}

main(){
	
	float valor=0.0;
	

	
	printf("Ingrese un valor superior a 600 para convertir: ");
	scanf("%f",&valor);
	
	if(valor>=600){
		printf("Valor: %.2f . Pasados a horas: %.2f \n" ,valor ,pasarHora(valor));
		printf("Valor: %.2f . Pasados a minutos: %.2f \n" ,valor ,pasarMin(valor));
		printf("Valor: %.2f . Pasados a segundos: %.2f \n" ,valor ,pasarSeg(valor));
	}else{
		printf("Ingrese numero mayor a 600. Reinicie el programa");
	}
	
	
	
}

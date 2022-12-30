#include <stdio.h>

float notaParcial, notaInteg, notatrabFinal, promparc, prominteg, promtrabF, notaObtenida, notaFinal;

main(){
	
	printf("Ingrese la nota promedio de los parciales: ");
	scanf("%f",&notaParcial);
	printf("Ingrese la nota promedio de los trabajos integradores: ");
	scanf("%f",&notaInteg);
	printf("Ingrese la nota promedio del trabajo final: ");
	scanf("%f",&notatrabFinal);
	
	promparc=0.40;
	prominteg=0.20;
	promtrabF=0.40;
	
	notaObtenida=(notaParcial*promparc)+ (notaInteg*prominteg) + (notatrabFinal*promtrabF);
	notaFinal= notaObtenida*100/10;
	
	printf("La nota final obtenida es: %f", notaFinal);


	
}

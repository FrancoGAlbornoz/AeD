#include <stdio.h>
#include <stdlib.h>

main(){
	
	
	int codAvion, cantP1,cantP2,cantP3,cantP4, N, cantT1=0, cantT2=0, cantT3=0, cantT4=0 ;
	float cont1, cont2, cont3, cont4, alt1, alt2, alt3, alt4, minVuelo1, minVuelo2, minVuelo3, minVuelo4, h1, h2, h3, h4, altT1, altT2, altT3, altT4, prom1, prom2, prom3, prom4, totalVuelo1, totalVuelo2, totalVuelo3, totalVuelo4;
	
	printf("Problema aviones.");
	
	printf("Ingrese numero de viajes.");
	scanf("%d",&N);
	
	
	
	for(int i=0; i<N; i++){
		
		printf("Ingrese el codigo de avion\n");
		scanf("%d",&codAvion);
		
		if(codAvion == 1 || codAvion == 2 || codAvion == 3 || codAvion == 4){
			
			if(codAvion==1){
				
				cont1=cont1+1; //contador de cantidad de vuelos
				printf("viajes: %.2f \n", cont1 );
				
				printf("Ingresar el tiempo de vuelo en minutos del avion COD1\n");
				scanf("%f",&minVuelo1);
				totalVuelo1=totalVuelo1+minVuelo1; //acumulador de minutos de vuelo
				h1=totalVuelo1/60; //hora

				printf("Ingresar la cantidad de pasajeros transportados por el avion COD1\n");
				scanf("%d",&cantP1);
				cantT1= cantT1+cantP1;//acumulador de pasajeros
				printf("cantidad de pax acumulada: %d \n", cantT1 );
				
				printf("Ingresar la altura en metros alcanzada por el avion COD1\n");
				scanf("%f",&alt1);
				altT1=altT1+alt1; //acumulador alturas
				prom1=altT1/cont1; //promedio de alturas

				
			}
			
			if(codAvion==2){
				
				cont2=cont2+1; //contador de cantidad de vuelos
				printf("viajes: %.2f \n", cont2 );
				
				printf("Ingresar el tiempo de vuelo en minutos del avion COD2\n");
				scanf("%f",&minVuelo2);
				totalVuelo2=totalVuelo2+minVuelo2; //acumulador de minutos de vuelo
				h2=totalVuelo2/60; //hora

				printf("Ingresar la cantidad de pasajeros transportados por el avion COD2\n");
				scanf("%d",&cantP2);
				cantT2= cantT2+cantP2;//acumulador de pasajeros
				printf("cantidad de pax acumulada: %d \n", cantT2 );
				
				printf("Ingresar la altura en metros alcanzada por el avion COD2\n");
				scanf("%f",&alt2);
				altT2=altT2+alt2; //acumulador alturas
				prom2=altT2/cont2;; //promedio de alturas
				
			}
			
			if(codAvion==3){
				
				cont3=cont3+1; //contador de cantidad de vuelos
				printf("viajes: %.2f \n", cont3 );
				
				printf("Ingresar el tiempo de vuelo en minutos del avion COD3\n");
				scanf("%f",&minVuelo3);
				totalVuelo3=totalVuelo3+minVuelo3; //acumulador de minutos de vuelo
				h3=totalVuelo3/60; //hora

				printf("Ingresar la cantidad de pasajeros transportados por el avion COD3\n");
				scanf("%d",&cantP3);
				cantT3= cantT3+cantP3;//acumulador de pasajeros
				printf("cantidad de pax acumulada: %d \n", cantT3 );
				
				printf("Ingresar la altura en metros alcanzada por el avion COD3\n");
				scanf("%f",&alt3);
				altT3=altT3+alt3; //acumulador alturas
				prom3=altT3/cont3;; //promedio de alturas
				
			}
			
			if(codAvion==4){
				
				cont4=cont4+1; //contador de cantidad de vuelos
				printf("viajes: %.2f \n", cont4 );
				
				printf("Ingresar el tiempo de vuelo en minutos del avion COD4\n");
				scanf("%f",&minVuelo4);
				totalVuelo4=totalVuelo4+minVuelo4; //acumulador de minutos de vuelo
				h4=totalVuelo4/60; //hora
				
				printf("Ingresar la cantidad de pasajeros transportados por el avion COD4\n");
				scanf("%d",&cantP4);
				cantT4= cantT4+cantP4; //acumulador de pasajeros
				printf("cantidad de pax acumulada: %d \n", cantT4 );

				printf("Ingresar la altura en metros alcanzada por el avion COD4\n");
				scanf("%f",&alt4);
				altT4=altT4+alt4; //acumulador alturas
				prom4=altT4/cont4; //promedio de alturas
				
			}
			
			
		}else{
			printf("Codigo ingresado invalido");
		}
		
		
	}

	printf("El tiempo volado por el avion COD1: %.2f \n", h1);
	printf("El tiempo volado por el avion COD2: %.2f \n", h2);
	printf("El tiempo volado por el avion COD3: %.2f \n", h3);
	printf("El tiempo volado por el avion COD4: %.2f \n", h4);

	printf("El promedio de alturas maximas alcanzados por el avion COD1 es: %f  metros-.\n", prom1);
	printf("El promedio de alturas maximas alcanzados por el avion COD2 es: %f  metros-.\n", prom2);
	printf("El promedio de alturas maximas alcanzados por el avion COD3 es: %f  metros-.\n", prom3);
	printf("El promedio de alturas maximas alcanzados por el avion COD4 es: %f  metros-.\n", prom4);

	if (cantT1 > cantT2 && cantT1 > cantT3 && cantT1> cantT4)
	{
		printf("El avion COD 1. Llevo la mayor cantidad de pasajeros:  %d  \n", cantT1);
	}
	if (cantT2 > cantT1 && cantT2 > cantT3 && cantT2> cantT4)
	{
		printf("El avion COD 2. Llevo la mayor cantidad de pasajeros:  %d  \n", cantT2);
	}
	if (cantT3 > cantT1 && cantT3 > cantT2 && cantT3> cantT4)
	{
		printf("El avion COD 3. Llevo la mayor cantidad de pasajeros:  %d  \n", cantT3);
	}
	if (cantT4 > cantT1 && cantT4 > cantT2 && cantT4> cantT3)
	{
		printf("El avion COD 4. Llevo la mayor cantidad de pasajeros:  %d  \n", cantT4);
	}
	
	printf("La cantidad de pasajeros transportados por el avion COD1: %d \n", cantT1);
	printf("La cantidad de pasajeros transportados por el avion COD2: %d \n", cantT2);
	printf("La cantidad de pasajeros transportados por el avion COD3: %d \n", cantT3);
	printf("La cantidad de pasajeros transportados por el avion COD4: %d \n", cantT4);



	
	
	
}

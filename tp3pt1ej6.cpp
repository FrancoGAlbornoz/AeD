#include <stdio.h>
using namespace std;

main(){
    printf("Problema 6\n\n ");
    int mes, dia;

    printf("Ingrese valor numerico que represente un dia del mes. debe ser mayor a 1 y menor a 31: \n");
    scanf("%d",&dia);
    printf("Ingrese valor numerico que represente un mes. debe ser mayor a 1 y menor a 12: \n");
    scanf("%d",&mes);

    if(dia>31 or dia<1 and mes>12 or mes<1){
        printf("Valores incorrectos.");
    }
    
    if(mes==2){
        if(dia>29){
            printf("Valor incorrecto. no existe este dia para este mes.");
        }
    }

    if(mes==4 or mes==6 or mes==9 or mes==11){
        if(dia>30){
            printf("Valor incorrecto. no existe este dia para este mes.");
        }
    }

    switch (mes)
    {
    case 1:
        printf("Estacion verano");
        break;
    case 2:  
        printf("Estacion verano");
        break;  
    case 3:
    	if(dia<22){
    		printf("Estacion verano");
		}else{
			printf("Estacion otoño");
		}
        break;
    case 4:
        printf("Estacion otoño");
        break;
    case 5:
        printf("Estacion otoño");
        break;
    case 6:
    	if(dia<22){
    		printf("Estacion oto�o");
		}else{
			printf("Estacion invierno");
		}
        break;
    case 7:
        printf("Estacion invierno");
        break;
    case 8:
        printf("Estacion invierno");
        break;
    case 9:
    	if(dia<22){
    		printf("Estacion invierno");
		}else{
			printf("Estacion primavera");
		}
        
        break;
    case 10:
        printf("Estacion primavera");
        break;
    case 11:
        printf("Estacion primavera");
        break;
    case 12:
    	if(dia<22){
    		printf("Estacion primavera");
		}else{
			printf("Estacion verano");
		}
        
        break;
    default:
        break;
    }


}

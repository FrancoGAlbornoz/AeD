#include <stdlib.h>
#include <stdio.h>

int numcta, dnisocio;
float saldo, totSaldosAc;
int n=0;


main(){
	
	printf("Ingrese la cantidad de socios: ");
	scanf("%d",&n);
	
	for(int c=1; c<=n; c++)
	{
		
		printf("\nNro de cuenta de socio: ");
		scanf("%d", &numcta);
		
		printf("DNI Socio: ");
		scanf("%d", &dnisocio);
		
		printf("Saldo del socio: ");
		scanf("%f", &saldo);
		
	
		printf("_________Datos de la cuenta__________");
		printf("\nCuenta Nro %d", numcta);
		printf("\nDNI N°: %d", dnisocio);
		
		if(saldo>0){
			
			totSaldosAc = totSaldosAc + saldo;
			printf("\nSaldo acreedor de: $ %.2f \n", saldo);
			printf("\n\n-----------------\n\n");
			
		}
		else{
			
			if(saldo<0){
				
			printf("\nSaldo deudor de: $ %.2f", saldo);
			printf("\n\n-----------------\n\n");
		
			}
			else{
				printf("\nSaldo nulo: $ 0.00");
				printf("\n\n-----------------\n\n");
			}
		}

	}
	
	printf("El total de saldos acreedores es:  $ %.2f",totSaldosAc);

	
	
}

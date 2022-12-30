# include <stdio.h>
# include <stdlib.h>

int N=0;
int cont=0;
float num=0;
int b;
int i;
int aux=0;

main(){
	
	printf("--Evaluamos numeros primos o compuestos--\n");
	printf("Ingrese la cantidad de numeros a evaluar: ");
	scanf("%d",&N);
	
	for(cont=1;cont<=N;cont++){
		
		printf("Ingrese un numero entero y positivo a evaluar: "); 
		scanf("%f",&num);
		
		aux=num;
		
		while(num-aux or num<0){
		printf("\nEl numero no es valido. Ingrese un numero entero y positivo a evaluar: "); 
		scanf("%f",&num);
		aux=num;
		
		}
		b=0;
		for(i=2;i<aux;i++){
			if(aux%i==0){
				b=1;
			}
			
		}
		if(b==1){
			printf("El numero %.0f NO es primo \n", num);
		}
		else if(num==0){
			printf("El numero es 0 \n");	
		}
		else{
			printf("El numero %.0f es primo \n", num);
		}
		

	}
}
	

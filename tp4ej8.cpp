#include <stdio.h>


float promI(int contI, int accImp);
void porcPar(int contP, int contn, float &porcP );

main(){
	
	int q, n, contn=0, contP=0, contI=0, sumaP=0, accImp=0 ;
	float prom, porcP;
	
	printf("Ingrese cantidad de numeros a evaluar: \n");
	scanf("%d",&q);
	
	for(int i=0; i<q; i++){
		
		printf("Ingrese un numero: \n");
		scanf("%d",&n);
		
		contn=contn+1;
		
		if(n%2==0){
			
			contP=contP+1;
			sumaP=sumaP+n;	
				
		}else{
			
			accImp=accImp+n;
			contI=contI+1;
		}	
	}
	
	
	
	porcPar( contP, contn, porcP );
	
	printf("Porcentaje de valores pares:  %.2f \n", porcP);
	
	printf("Promedio de valores impares: %.2f \n",  promI( contI, accImp));
	
	
	
}

void porcPar(int contP, int contn, float &porcP ){
	
	if(contP==0){
		porcP=0;
	}else{
		porcP= (float)contP/contn;
	}
	
	
}

float promI(int contI, int accImp){
	
	float promI;
	if(contI==0 || accImp==0){
		promI=0;
	}else{
		promI= (float)accImp/contI;
		return promI;
	}
	
	
	
	
}
	
	




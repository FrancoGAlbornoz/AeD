#include <stdio.h>
#include <stdlib.h>

void datos(int n1, float nota1[100]);
void men_may(int n1, float nota1[100], int &may, int &men);
float promN(int n1, float nota1[100]);
int supP(int n1, float nota1[100]);
void dp_ap(int n1, float nota1[100], int &dp, int &ap);

main(){
	
	int i, n, may, men, prom,dp,ap;
	float nota[100];
	
	printf("Ingresar cantidad de notas: ");
	scanf("%d",&n);
	
	datos(n,nota);
	men_may(n, nota, may, men);
	dp_ap(n,nota,dp,ap);

	
	printf("\n La nota mayor es %d y la nota menor es %d", may, men);
	printf("\n Promedio de notas: %.2f", promN(n,nota) );
	printf("\n Cantidad de notas superiores al promedio es %d", (n,nota, prom));
	printf("\n Cantidad de alumnos aprobados es %d y la cantidad de alumnos desaprobados es %d", ap, dp);


}
//--------
void datos(int n1, float nota1[100]){
	
	int i;
	
	for(i=0; i<n1; i++){
		
		printf("Ingrese la nota: ");
		scanf("%f", &nota1[i]);
		
		while(nota1[i]>10 || nota1[i]<1 ){
			
			printf("\nEl valor ingresado es menor a 1 o mayor a 10 ,Ingrese nuevamente la nota. \n");
			printf("Ingrese la nota: ");
			scanf("%f", &nota1[i]);
		}
		
	}
}
//-------------
void men_may(int n1, float nota1[100], int &may, int &men){
	
	int i;
	men= nota1[0];
	may=0;
	
	for(i=0;i<n1;i++){
		if(men>nota1[i]){
			men=nota1[i];
		}
	}
	
	for(i=0;i<n1;i++){
		if(nota1[i]>may){
			may=nota1[i];
		}
	}
		
}
//------------
float promN(int n1, float nota1[100]){
	
	int i;
	
	float prom, suma=0;
	
	for (i=0;i<n1;i++){
		
		suma=suma+nota1[i];
		
	}
	prom=suma/n1;
	
	return prom;
	
}
//----------CONSULTA!
int supP(int n1, float nota1[100], float prom){
	
	int i, cN=0, suma=0;
	
	for(i=0;i<n1;i++){
		suma=suma+nota1[i];
		prom=suma/n1;
		if(nota1[i]>prom){
			cN++;
		}
	}
	return cN;
	
}
//-------------
void dp_ap(int n1, float nota1[100], int &dp, int &ap){
	
	int i;
	int cdp=0, cap=0;
	
	
	
	for(i=0;i<n1;i++){
		if(nota1[i]>=6){
			cap++;
		}
		else{
			cdp++;
		}
	}
	dp = cdp;
	ap = cap;
	
	
}








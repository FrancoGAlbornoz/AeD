#include <stdio.h>
using namespace std;

main(){
	int n1,n2,n3;
	float promedio;
	
	printf("Problema 1\n\n ");
	
	
	printf("Ingrese la nota n° 1 : \n");
	scanf("%d",&n1);
	printf("Ingrese la nota n° 2: \n");
	scanf("%d",&n2);
	printf("Ingrese la nota n° 3: \n");
	scanf("%d",&n3);
	
	if(n1<=10 and n1>=1 and n2<=10 and n2>=1 and n3<=10 and n3>=1 ){
		promedio=(n1+n2+n3)/3;

		printf("Su promedio es de : %.2f \n", promedio);

		if (promedio>=6){
			printf("Aprobo");
		}
		if (promedio<6)
	
		{
			printf("Desaprobado");
		}
		
		
		
	}else{
		printf("Ingrese numeros entre 1 y 10 : \n");
	}
	
}

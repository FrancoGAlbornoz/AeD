#include <stdio.h>
using namespace std;

main(){
    printf("Problema 7\n\n ");

    int n1,n2,n3, div, suma, prod;

    printf("Ingresar 3 numeros\n");

    printf("Ingresar primer numero: \n");
    scanf("%d",&n1);
    printf("Ingresar segundo numero: \n");
    scanf("%d",&n2);
    printf("Ingresar tercer numero: \n");
    scanf("%d",&n3);

    if(n1==n2){
        suma=n1+n2+n3;
        printf("Resultado de la suma de los 3 numeros ingresados: %d", suma);
    }
    if(n1<n3){
        prod=n1*n2;
        printf("Resultado del producto del primer por el segundo numero ingresado: %d", prod);
    }
    if(n2>n1){
        if(n1=0){
            printf("No se puede dividir en 0");
        }
        div=n2/n1;
        printf("Resultado de la division de los 2 numeros ingresados: %d", div);
    }















}



	

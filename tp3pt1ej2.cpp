#include <stdio.h>
using namespace std;

main(){
    printf("Problema 2\n\n ");

    float n1, n2, n3, n4, res1, res2;

    printf("Ingresar el primer numero: \n");
    scanf("%f",&n1);
    printf("Ingresar el segundo numero: \n");
    scanf("%f",&n2);
    printf("Ingresar el tercer numero: \n");
    scanf("%f",&n3);
    printf("Ingresar el cuarto numero: \n");
    scanf("%f",&n4);

    if (n2==0 and n4==0)
    {
        printf("No se puede dividir en 0.El programa se cierra");
        
    }
    res1=n1/n2;
    res2=n3/n4;

    if (res1==res2)
    {
        printf("El resultado de la division es igual.");
    }else{
        printf("El resultado de la division no es igual.");
    }
    
    

}

#include <stdio.h>
using namespace std;

main(){
    printf("Problema 8\n");

    float pregR, pregC, porcent;

    printf("Ingrese la cantidad de preguntas contestadas: \n");
    scanf("%d",&pregR);
    printf("Ingrese el numero de respuestas correctas: \n");
    scanf("%d",&pregC);

    porcent=(pregC*100)/pregR;

    if(porcent>=90){
        printf("Nivel Superior.");
    }
    if(porcent>=75 and porcent<90){
        printf("Nivel Medio.");
    }
    if (porcent>=50 and porcent<75)
    {
        printf("Nivel Regular.");
    }

}

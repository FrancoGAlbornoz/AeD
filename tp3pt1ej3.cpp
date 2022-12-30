#include <stdio.h>
#include <math.h>
using namespace std;

main(){
    printf("Problema 3\n\n ");
    int num;

    printf("Ingrese el numero a evaluar: ");
    scanf("%d",&num);

    if(num>=0)
    {
        float raiz= sqrt(num);
        printf("La raiz cuadrada de %d es %.4f\n", num, raiz);
    }
    if (num<0)
    {
        float vAbs = abs(num);
        printf("El valor absoluto de %d es %.2f\n", num, vAbs);
    }
    

}

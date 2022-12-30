#include <stdio.h>
#include <stdlib.h>
#include <libreriatp3.h>

main()
{   

    int opc=0, a, b, c, M, m, S, rest=0;
    float P, Prod, div=0;
    printf("PROBLEMA LIBRERIAS.\n");


    printf("MENU DE OPCIONES. ELIJA UNA OPCION\n");
    printf(" 1-Mayor de 3 numeros.\n 2-Menor de 3 numeros.\n 3-Promedio de 3 numeros.\n 4-Producto de 2 valores. (A*B)\n 5-Division de 2 valores. (A/B)\n 6-Suma de 2 valores (A+B)\n 7-Resta de 2 valores (A-B)\n");
    scanf("%d", &opc);

    printf("\nINGRESE LOS 3 VALORES.(Para algunas opciones solo se necesita 2 valores. Ignorar el tercero)\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);



    switch (opc)
    {
    case 1:
        
        M=mayor(a,b,c);
        printf("Mayor es: %d", M);

        break;
    case 2:
    
        m=menor(a,b,c);
        printf("Menor es: %d", m);

        break;
    case 3:
        
        P=promedio(a, b, c);
        printf("Promedio es: %.2f", P);

        break;
    case 4:
        
        Prod=producto(a, b);
        printf("Producto de A*B: %.2f", Prod);

        break;
    case 5:
        
        division(a, b, div);
        printf("Division de A/B: %.2f", div);

        break;
    case 6:
        
        S=suma(a, b);
        printf("Suma es: %d", S);

        break;
    case 7:
        
        resta(a, b, rest);
        printf("Resta es: %d", rest);

        break;
    
    default:
        break;
    }

    
}

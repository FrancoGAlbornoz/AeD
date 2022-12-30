#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef char cadena[30];
cadena vSocios[30];


void menu(int n);
void ingresarDatos(cadena vSocios[50], int n);
void mostrar(cadena vectorSocios[50], int n);
void ordenarVectorAscedente(cadena vector[50], int &n);
void ordenarVectorDescendente(cadena vector[50], int &n);

main(){
    int n=0;

    printf("Ingrese la cantidad de socios a cargar: ");
    scanf("%d", &n);

    menu(n);

}


void menu(int n){
    int opc = 0;
   
    do{
        printf("--- Menu ---\n");
        printf("1. Ingrese los datos de los socios. \n");
        printf("2. Ordenar el vector de forma decreciente. \n");
        printf("3. Ordenar los apellidos de forma creciente.\n");
        printf("4. Mostrar por pantalla las personas\n");
        printf("\n");
        printf("Su opcion es: "); 
		scanf("%d", &opc);
		system("CLS");
		
        switch(opc){
            case 1:

               ingresarDatos(vSocios, n); 
               
                break;
            case 2:

                ordenarVectorDescendente(vSocios, n);
				mostrar(vSocios, n);
                break;

            case 3:

                ordenarVectorAscedente(vSocios, n);
				mostrar(vSocios, n);
                break;

            case 4:

                mostrar(vSocios, n);
                break;

            default:
                printf("Opcion incorrecta, saliendo...");
        }
    }while(opc >= 1 && opc <= 4);
}

void ingresarDatos(cadena vSocios[50], int n){
    for(int i = 0; i <= n; i++){
        gets(vSocios[i]);
    }
}
void ordenarVectorAscedente(cadena vector[50], int &n){
    int b;
	char aux[50];
    
    do{
        b = 0;
        for(int i = 0; i < n; i++){
            if(strcmp(vector[i], vector[i+1]) > 0){
                strcpy(aux, vector[i]);
                strcpy(vector[i], vector[i+1]);
                strcpy(vector[i+1], aux);
                b++;
            }
        }
    }while(b);

}

void ordenarVectorDescendente(cadena vector[50], int &n){
    int b;
	char aux[50];
    
    do{
        b = 0;
        for(int i = 0; i < n; i++){
            if(strcmp(vector[i], vector[i+1]) < 0){
                strcpy(aux, vector[i]);
                strcpy(vector[i], vector[i+1]);
                strcpy(vector[i+1], aux);
                b++;
            }
        }
    }while(b);

}
void mostrar(cadena vectorSocios[50], int n){
	printf("Los socios son (%d socios registrados): \n", n);
	for(int i = 0; i <= n; i++){
		puts(vectorSocios[i]);	
	} 
	
	printf("\n");
	system("pause");
	system("cls");
}

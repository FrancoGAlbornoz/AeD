#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct parOrdenado{
    int cordAbcisa;
    int cordOrdenada;
};

int menu();
void cargarPuntos(parOrdenado puntos[2], int n);
void mostrarPuntos(parOrdenado puntos[2], int n);
float calcularDistanciaP1(parOrdenado puntos[2], int n);
float calcularDistanciaEntrePuntos(parOrdenado puntos[2], int n);

main(){
    parOrdenado puntos[2];
    int n = 2;
    int opcionUsuario = 0;
    float distancia1 = 0.0;
    float distancia2 = 0.0;

    do{
        opcionUsuario = menu();

        switch(opcionUsuario){
            case 1:
                    system("cls");
                    cargarPuntos(puntos, n);
                break;
            case 2:
                    system("cls");
                    mostrarPuntos(puntos, n);
                break;
            case 3:
            	system("cls");
                distancia1 = calcularDistanciaP1(puntos, n);
                printf("La distancia de (%d, %d) a (0, 0) es: %.2f ", puntos[0].cordAbcisa, puntos[0].cordOrdenada, distancia1);
                printf("\n\n");
				system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                distancia2 = calcularDistanciaEntrePuntos(puntos, n);
                printf("La distancia entre el punto 1 y 2 es: %.2f ", distancia2);
                printf("\n\n");
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                printf("\n\n");
                printf("Finalizando el programa...");
                break;
        }

    }while(opcionUsuario != 5);


}


int menu(){
    int opc;
        printf("--- Menu ---\n");
        printf("1. Cargar dos puntos por teclado. \n");
        printf("2. Mostrar los dos puntos en forma de par ordenado. \n");
        printf("3. Mostrar la distancia hasta el origen de coordenadas. \n");
        printf("4. Mostrar la longitud del segmento de recta que une los dos puntos. \n");
        printf("5. Cerrar programa. \n");

        printf("\nSu opcion es: ");
        scanf("%d", &opc);
   return opc;
}

void cargarPuntos(parOrdenado puntos[100], int n){
    system("cls");
    for(int i = 0; i < n; i++){
        printf("Ingrese el punto de ordenada de %d: ", i+1);
        scanf("%d", &puntos[i].cordAbcisa);
        printf("Ingrese el punto de abcisa de %d: ", i+1);
        scanf("%d", &puntos[i].cordOrdenada);
    }
    printf("\n\n");
    
    system("pause");
    system("cls");
}

void mostrarPuntos(parOrdenado puntos[100], int n){
    system("cls");
    for(int i = 0; i < n; i++){
        printf("El par ordenado %d es: (%d, %d) \n", i+1, puntos[i].cordAbcisa, puntos[i].cordOrdenada);
    }
    printf("\n\n");
    
    system("pause");
    system("cls");
}

float calcularDistanciaP1(parOrdenado puntos[100], int n){
    float distancia = sqrt(puntos->cordAbcisa^2 + puntos->cordOrdenada^2);
    return distancia;
}



float calcularDistanciaEntrePuntos(parOrdenado puntos[2], int n){
	int x1 = puntos[0].cordAbcisa;
	int x2 = puntos[1].cordAbcisa;
	int y1 = puntos[0].cordOrdenada;
	int y2 = puntos[1].cordOrdenada;
	float distanciaEntrePuntos = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    return distanciaEntrePuntos;   
}

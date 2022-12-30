#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fechaIngreso{
    int anio;
};

struct fechaProceso{
    int anio;
};


struct empleados{
    char ApYNom[50];
    char Domicilio[30];
    fechaIngreso fecIng;
    fechaProceso fecProc; 
    int antiguedad;
};

void cargarEmpleados(empleados empleados[20], int &contador);
float promedioEmpleados(empleados empleados[20], int &contador);
int mostrarAntiguedadPorNombre(empleados empleados[20], int &contador, char apynom[50]);
void listarEmpleados(empleados empleados[20], int &contador);

main(){
    int contador = 0;
    empleados empleadosDeLaEmp[20];
    float prom = 0.0;
    char apynom[50];
    int antiguedad = 0;

    system("cls");

    cargarEmpleados(empleadosDeLaEmp, contador);
	_flushall();

    prom = promedioEmpleados(empleadosDeLaEmp, contador);

    printf("\nEl promedio de edades es de: %.2f", prom);

	printf("\n\n");
	system("pause");
	system("cls");
	
    printf("\nIngresar un apellido y nombre para mostrar la antiguedad: ");
	_flushall();
    gets(apynom);

    antiguedad = mostrarAntiguedadPorNombre(empleadosDeLaEmp, contador, apynom);

    printf("La antiguedad de %s es de: %d anios", apynom, antiguedad);
    
    printf("\n");
    system("pause");
    
    system("cls");
    
    listarEmpleados(empleadosDeLaEmp, contador);

}



void cargarEmpleados(empleados empleados[20], int &contador){
	contador = 0;
	int bandera = 0;
    do{
    	system("cls");
        printf("\nIngrese el Apellido y Nombre: ");
        _flushall();
        gets(empleados[contador].ApYNom);
        _flushall();
        printf("\nIngrese el domicilio: ");
        gets(empleados[contador].Domicilio);
        _flushall();
        printf("\nIngrese la fecha de ingreso: ");
        scanf("%d", &empleados[contador].fecIng.anio);
        _flushall();
        printf("\nIngrese la fecha de proceso: ");
        scanf("%d", &empleados[contador].fecProc.anio);
        _flushall();

        empleados[contador].antiguedad = empleados[contador].fecProc.anio - empleados[contador].fecIng.anio;

		contador++;
        printf("\n\nYa cargo el empleado %d", contador);
        printf("\nDesea cargar mas? \n1 - Si \t\t 2 - No");
        printf("\nSu opcion: ");
        scanf("%d", &bandera);
    }while(bandera == 1 && contador < 20);
}

float promedioEmpleados(empleados empleados[20], int &contador){
    int ac = 0.0;
    float promedio = 0.0;
    
    for(int i = 0; i < contador; i++){
        ac += empleados[i].antiguedad;
    }

    promedio = (float) ac/contador;

    return promedio;
}

int mostrarAntiguedadPorNombre(empleados empleados[20], int &contador, char apynom[50]){
    int antiguedad = 0;
    int comparacion = 0;
    int guardindex; 
    for(int i = 0; i < contador; i++){
        comparacion = strcmp(apynom, empleados[i].ApYNom);
        if(comparacion == 0){
            guardindex = i;
            i = contador;
        }
    }
    antiguedad = empleados[guardindex].antiguedad;
    return antiguedad;
}

void listarEmpleados(empleados empleados[20], int &contador){
    system("cls");
    
    for(int i = 0; i < contador; i++){

    printf("--- Empleado %d ---\n", i);
    printf("\nApellido y Nombre: %s", empleados[i].ApYNom);
    printf("\nDomicilio: %s", empleados[i].Domicilio);
    printf("\nFecha Ingreso: %d", empleados[i].fecIng.anio);
    printf("\nFecha Proceso: %d", empleados[i].fecProc.anio);
    printf("\nAntiguedad: %d anios", empleados[i].antiguedad);

    }

    printf("\n\n");
    system("pause");
}

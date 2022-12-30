#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct fechaReg{
    int dia;
    int mes;
    int anio;
};

struct info{
    char numExp[30];
    char nombre[30];
    float mxmConsturidos;
    int tipoObra;
    fechaReg fecha;
    float montoMonetario;
};

void cargarInformacion(info informac[30], int n);
int buscarExpediente(info informac[30], int n, int &indiceEncontrado, char numeroExp[30]);
void cargarFechaYMonto(info informac[30], int indiceEncontrado, int dia, int mes, int anio, float monto);

main(){
    info informacion[30];
    char numeroExpediente[30];
    int indiceEncontrado;
    int comparacion;
    int n =0;

    int dia, mes, anio;
    float monto;
	
	do{
	    printf("Ingrese la cantidad n: ");
	    scanf("%d", &n);
		printf("\n");	
	}while(n < 5);

    cargarInformacion(informacion, n);

    
    printf("\nIngrese un Numero de Expediente: ");
    _flushall();
    gets(numeroExpediente);
    
    comparacion = buscarExpediente(informacion, n, indiceEncontrado, numeroExpediente);

    if(comparacion == 1){
        printf("\nIngrese la fecha de adelanto (dia): ");
        scanf("%d", &dia);
        printf("\nIngrese la fecha de adelanto (mes): ");
        scanf("%d", &mes);
        printf("\nIngrese la fecha de adelanto (anio): ");
        scanf("%d", &anio);
        
        printf("\nIngrese el monto: ");
        scanf("%f", &monto);

        cargarFechaYMonto(informacion, indiceEncontrado, dia, mes, anio, monto);
    }else{
        system("cls");
        printf("\nNo se encontro el expediente..");
    }

    printf("\n\n");
    system("pause");
    system("cls");
    printf("Ingrese un expediente para listar: ");
    _flushall();
    gets(numeroExpediente);

    comparacion = buscarExpediente(informacion, n, indiceEncontrado, numeroExpediente);

    if(comparacion == 1){
        system("cls");

        printf("Expediente: %s", informacion[indiceEncontrado].numExp);
        printf("\nPropietario: %s", informacion[indiceEncontrado].nombre);
        printf("\nTipo de obra: %d", informacion[indiceEncontrado].tipoObra);

        printf("\n\n Fecha  (dia/mes/anio)   |    Monto");
        printf("\n%3d %3d %3d              | %10.2f", informacion[indiceEncontrado].fecha.dia, informacion[indiceEncontrado].fecha.mes, informacion[indiceEncontrado].fecha.anio, informacion[indiceEncontrado].montoMonetario);
    }



}

void cargarInformacion(info informac[30], int n){
    for(int i=0; i<n; i++){
        printf("\nIngrese el numero de expediente: ");
        _flushall();
        gets(informac[i].numExp);
        printf("\nIngrese el nombre del cliente: ");
        _flushall();
        gets(informac[i].nombre);
        printf("\nIngrese los metros cuadrados construidos: ");
        scanf("%f", &informac[i].mxmConsturidos);
        printf("\nIngrese el tipo de obra: ");
        scanf("%d", &informac[i].tipoObra);

    }
}

int buscarExpediente(info info[30], int n, int &indiceEncontrado, char numeroExp[30]){
    int comparacion = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(info[i].numExp, numeroExp) == 0){
            indiceEncontrado = i;
            i = n;
            comparacion = 1;
        }
    }

    return comparacion;
}

void cargarFechaYMonto(info informac[30], int indiceEncontrado, int dia, int mes, int anio, float monto){
    informac[indiceEncontrado].montoMonetario = monto;
    informac[indiceEncontrado].fecha.anio = anio;
    informac[indiceEncontrado].fecha.mes = mes;
    informac[indiceEncontrado].fecha.dia = dia;
}

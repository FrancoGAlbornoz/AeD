#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct datosCliente{
	int codCli; 
	char ApeNom[40];
	char dire[60]; 
	float monCred; 
};

void cargarDatos(datosCliente vClientes[100], int n);
void mostrarDatos(datosCliente vClientes[100], int n);
int montoSup(datosCliente vClientes[100], int n);



main(){

    datosCliente vClientes[100];

    int n=0, montocliente;
    printf("Ingresar cantidad de clientes:\n");
    scanf("%d",&n);

    cargarDatos(vClientes, n);
    mostrarDatos(vClientes, n);

    montocliente=montoSup(vClientes,n);

    printf("Clientes con monto de credito superior a 35000: %d",montocliente);


}
void cargarDatos(datosCliente vClientes[100], int n){

    int i, cod, montoM=0;

    for(i=0;i<n;i++){
        printf("\nNUEVO CLIENTE \n");
        printf("\nIngresar codigo de cliente: ");
        scanf("%d",&vClientes[i].codCli);
        _flushall();
        printf("Ingresar apellido y nombre:\n");
        gets(vClientes[i].ApeNom);
        _flushall();
        printf("Ingresar la direccion del cliente:\n");
        gets(vClientes[i].dire);
        _flushall();
        printf("Ingrese el monto maximo de crédito que puede tener: \n");
        scanf("%f", &vClientes[i].monCred);
        _flushall();


    }
}
void mostrarDatos(datosCliente vClientes[100], int n){
    printf("\nClientes.\n");
    int i;
    for(i=0; i<n;i++){
        printf("Codigo Cliente: %d \n", vClientes[i].codCli);
        printf("Cliente. Nombre y apellido: %s \n", vClientes[i].ApeNom);
        printf("Cliente. Direccion: %s \n", vClientes[i].dire);
        printf("Cliente. Monto credito: %.2f \n", vClientes[i].monCred);
        printf("\n \n");
    }
}

int montoSup(datosCliente vClientes[100], int n){

    int i, cont=0;

    for ( i = 0; i < n; i++)
    {
        if(vClientes[i].monCred>35000){
            cont++;
        }
    }
    return cont;

}
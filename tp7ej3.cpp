#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct datosCliente
{
    char ApeNom[40];
    char dire[60];
    float monVehi;
    fecha fecVenta;
};

void cargarDatos(datosCliente datosC[30], int &n, int &guardar);
void mostrarDatos(datosCliente datosC[30], int n);

main(){
    
    int guardado=0;
    int n=0;

    datosCliente datosC[30];
    

    printf("Ingrese la cantidad de ventas de la semana: "); 
    scanf("%d", &n);

    cargarDatos(datosC, n, guardado);
    mostrarDatos(datosC, n);

    printf("Fecha que menos se vendio: Dia: %d , Mes: %d , Anio: %d", datosC[guardado].fecVenta.dia, datosC[guardado].fecVenta.mes, datosC[guardado].fecVenta.anio);

}

void cargarDatos(datosCliente datosC[30], int &n, int &guardar){

    float monto=0.0;
    float min=0.0;


    for (int i = 0; i < n ; i++)
    {
        printf("Cliente %d.\n", i+1);
        
        printf("Cliente. Ingrese apellido y nombre: \n");
        _flushall();
        gets(datosC[i].ApeNom);
        
        printf("Cliente. Domicilio: \n");
        _flushall();
        gets(datosC[i].dire);
        
        printf("Vehiculo. Ingrese monto:\n");
         _flushall();
        scanf("%f",&monto);
       
        if(i == 0) min = monto;
        if(min>monto){
            min= monto;
            guardar=i;
        }
        datosC[i].monVehi=monto;

        _flushall();

        printf("Venta-Dia : ");
        scanf("%d", &datosC[i].fecVenta.dia);
        _flushall();

        printf("Venta-Mes: ");
        scanf("%d", &datosC[i].fecVenta.mes);
         _flushall();

        printf("Venta-Anio: ");
        scanf("%d", &datosC[i].fecVenta.anio);
        _flushall();



    }
    
}
void mostrarDatos(datosCliente datosC[30], int n){

    int i;

    for ( i = 0; i < n; i++)
    {
        printf("\nCliente.\n");
        printf("\nApellido y nombre: "); 
        puts(datosC[i].ApeNom);
        printf("\nDireccion del cliente: "); 
        puts(datosC[i].dire);
        printf("\nMonto del vehiculo: %.2f", datosC[i].monVehi);
        printf("\nDia de venta: %d", datosC[i].fecVenta.dia);
        printf("\nMes de venta: %d", datosC[i].fecVenta.mes);
        printf("\nAnio de venta: %d\n\n", datosC[i].fecVenta.anio);
    }
    
}

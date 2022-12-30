#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct fechaNac
{
    int dia;
    int mes;
    int anio;
};

struct notasTrimestrales
{
    float trimestre1;
    float trimestre2;
    float trimestre3;
    float promedio;
};

struct alumno
{
    int dni;
    char apenom[50];
    fechaNac fechaAlumno;
    notasTrimestrales notaAlumno;
};

void cargaDatos(alumno vAlumnos[30], int n);
float promCurso(alumno vAlumnos[30], int n);

main(){

    alumno vAlumnos [30];
    int n=0;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &n);

    cargaDatos(vAlumnos, n);
    float prom=0;

    prom = (float) promCurso(vAlumnos, n);

    printf("\nEl promedio del curso es de: %.2f \n\n", prom);



}
void cargaDatos(alumno vAlumnos[30], int n){

    int anio=0;
    int n1, n2, n3;

    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese el Nro de Doc: ");
        scanf("%d", &vAlumnos[i].dni);
        _flushall();
        printf("\nIngrese el apellido y nombre: ");
        gets(vAlumnos[i].apenom);
        _flushall();
        printf("\nIngrese el dia de nacimiento: ");
        scanf("%d", &vAlumnos[i].fechaAlumno.dia);
        _flushall();
        printf("\nIngrese el mes de nacimiento: ");
        scanf("%d", &vAlumnos[i].fechaAlumno.mes);
        _flushall();
        printf("\nIngrese el anio de nacimiento: ");
        scanf("%d", &anio);
        _flushall();

        while(anio < 0 && anio >= 10000){
            printf("\nIngrese el anio de nacimiento: ");
            scanf("%d", &anio);  
        }

        if(anio >= 0 && anio < 10000){
            vAlumnos[i].fechaAlumno.anio = anio;
        }

        printf("\n\n-- Carga de Notas --");

        printf("\nIngrese la nota 1: "); 
        _flushall();
        scanf("%f", &vAlumnos[i].notaAlumno.trimestre1);
        printf("\nIngrese la nota 2: "); 
        _flushall();
        scanf("%f", &vAlumnos[i].notaAlumno.trimestre2);
        printf("\nIngrese la nota 3: "); 
        _flushall();
        scanf("%f", &vAlumnos[i].notaAlumno.trimestre3);

        n1 = vAlumnos[i].notaAlumno.trimestre1;
		n2 = vAlumnos[i].notaAlumno.trimestre2;
		n3 = vAlumnos[i].notaAlumno.trimestre3;
        vAlumnos[i].notaAlumno.promedio = (n1+n2+n3)/3;

    }
    



}
float promCurso(alumno vAlumnos[30], int n){
    float acumulador = 0;
    for(int i=0; i<n; i++){
        acumulador += vAlumnos[i].notaAlumno.promedio;
    }

    float promCurso = 0; 
    promCurso = acumulador / n;

    return promCurso;
}

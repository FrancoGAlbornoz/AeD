# include <stdio.h>
# include <stdlib.h>

int main()
{

    int edad = 0; /* edad del socio*/
    int actividad = 0; /* Actividad que realiza 1.Futbol ; 2. Natacion ... */
    int sexo = 0; /*  sexo 1 = Masculinos, 2 = Femeninos */
	int numsocio=0;
	float edadP=0.0;
	
	int totalSocios=0;
	int edadesSocios=0;
    int socio_30_50_fut = 0;  /* Cantidad Socios entre 30 y 50 años */
    int socio_fem = 0; /* Cantidad Socios femeninos */
    int socio_masc = 0;/* Cantidad Socios masculinos */
    int socio_men_16 = 0;/* Cantidad Socios menores de 16 años */

   	
	printf("Club Social .  \n");
	printf("*************************\n\n");
	
	printf("Numero Socio: ");
	scanf("%d", &numsocio);

   

    while(numsocio!=0) {

            printf("Ingrese la Edad del socio: \n");
            scanf("%d",&edad);
            
            printf("Ingrese el sexo (1 = Masculino, 2 = Femenino): \n");
            scanf("%d",&sexo);
            
            printf("Ingrese la Actividad (1=Futbol, 2= Natacion, 3 = jockey): \n");
            scanf("%d",&actividad);
            
            totalSocios++;


            if ( ((edad >= 30) and (edad <= 50)) and ( actividad == 1) ) {
            	socio_30_50_fut++;
            	
            }

            if ( sexo == 2 ) {
                
				socio_fem++;

            }

            if ( sexo == 1 ) {

               socio_masc++;

            }

            if ( edad < 16 ) {
            	
        		socio_men_16++;

            }
            
            edadesSocios=edadesSocios+edad;
        
            printf("\n\nNumero Socio. Ingrese 0 para finalizar: ");
	        scanf("%d", &numsocio);

    } 
    
    if(totalSocios>0){
    	
    	edadP=edadesSocios/totalSocios;

	}

    /* Mostrar Resultados */

            printf("\n\n****************************************************\n\n");
            printf(" El Total de Socios entre 30 y 50 que practican Futbol es : %d .\n\n",socio_30_50_fut);
            printf("********************************************************\n\n");

            printf("\n\n****************************************************\n\n");
            printf(" El Total de Socios Femeninos es : %d .\n\n",socio_fem);
            printf("********************************************************\n\n");

            printf("\n\n****************************************************\n\n");
            printf(" El Total de Socios Masculinos es : %d .\n\n",socio_masc);
            printf("********************************************************\n\n");

            printf("\n\n****************************************************\n\n");
            printf(" El Total de Socios Menores de 16 años es : %d .\n\n",socio_men_16);
            printf("********************************************************\n\n");
            
            printf("\n\n****************************************************\n\n");
            printf("Edad promedia de socios: %.2f .\n\n",edadP);
            printf("********************************************************\n\n");

}


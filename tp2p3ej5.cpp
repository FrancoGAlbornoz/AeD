# include <stdio.h>
# include <stdlib.h>

int edad = 0; 
int sexo = 0; 
int patologia = 0;  

int masc_gripe_A = 0; 
int mujeres = 0;
int analizados = 0;
float porcntMujeres=0;

main()
{
   
	printf("Estadísticas en Hospital \n");
	printf("******************************************\n\n");


    printf("Ingrese la Edad ( 0 = Terminar ): \n");
    scanf("%d",&edad);

   while(edad!=0) {
   	
   	
   		printf("Ingrese Sexo (1 = Masculino, 2= Femenino): \n");
        scanf("%d",&sexo);

        printf("Ingrese Patologia (0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonía, 3 = Bronquitis): \n");
        scanf("%d",&patologia);
        
        analizados=analizados+1;

                

        if (sexo == 2) {
			mujeres++;
        }

        if ( (sexo == 1) and  (patologia == 1) ) {
        	masc_gripe_A++;
		}
        
        printf("\n\nIngrese edad (0 para finalizar): ");
        scanf("%d", &edad);
        
    } 
    
    if(analizados>0){
    	porcntMujeres=(mujeres*100)/analizados;
  	
	}

      printf("\n\n****************************************\n\n");
      printf("Porcentaje de mujeres: %f \n\n", porcntMujeres);
      printf("****************************************\n\n");

      printf("\n\n****************************************\n\n");
      printf("La cantidad de Masculinos  con Gripe A es : %d \n\n", masc_gripe_A);
      printf("****************************************\n\n");

}


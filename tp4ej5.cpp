#include <stdlib.h>
#include <stdio.h>

const int diaTrabajo = 5;

float CalcularPorcentaje(int parte, int todo)
{
	float porcentaje = 0.0;
	
	
	if (todo != 0)
	{
		porcentaje = (float) (parte * 100) / todo;
	}
	
	return porcentaje;	
}


main()
{
	int maquina = 0;

	int producidos = 0;  
	int desechados = 0;
	
	int respuesta = 0; 

	int produccionMaquina1 = 0;	
	int produccionMaquina2 = 0;	
	int produccionMaquina3 = 0;	
	
	int desechadosMaquina1 = 0;
	int desechadosMaquina2 = 0;
	int desechadosMaquina3 = 0;
	
	float porcentajeDesechados1 = 0.0;
	float porcentajeDesechados2 = 0.0;
	float porcentajeDesechados3 = 0.0;
	
	system("cls");
	
	for (int dia = 1; dia <= diaTrabajo; dia++)
	{
		system("cls");
		printf("Hubo produccion en el dia %d?: Ingrese 1 para SI. Cualquier otro numero para NO \n", dia);
		scanf("%d", &respuesta);
		
		if (respuesta == 1)
		{
			printf("\n\nPRODUCCION DEL DIA %d. Ingrese 1, 2, o 3 segun maquina.  0 Para finalizar el dia.", dia);
			
			printf("\nMaquina: ");
			scanf("%d", &maquina);
			
			while (maquina != 0)
			{
				printf("Producidos: ");
				scanf("%d", &producidos);
				
				printf("Desechados: ");
				scanf("%d", &desechados);
				
				printf("\n\n");
				
				switch ( maquina )
				{
					case 1: {
								produccionMaquina1 = produccionMaquina1 + producidos;
								desechadosMaquina1 = desechadosMaquina1 + desechados;
								break;
							}

					case 2: {
								produccionMaquina2 = produccionMaquina2 + producidos;
								desechadosMaquina2 = desechadosMaquina2 + desechados;
								break;
							}

					case 3: {
								produccionMaquina3 = produccionMaquina3 + producidos;
								desechadosMaquina3 = desechadosMaquina3 + desechados;
								break;
							}

				} 
				
				printf("\nMaquina: ");
				scanf("%d", &maquina);
				
			} 
			
		} 

	} 
	
	porcentajeDesechados1 = CalcularPorcentaje(desechadosMaquina1, produccionMaquina1);
	porcentajeDesechados2 = CalcularPorcentaje(desechadosMaquina2, produccionMaquina2);
	porcentajeDesechados3 = CalcularPorcentaje(desechadosMaquina3, produccionMaquina3);
	
	system("cls");
	printf("\n\nRESULTADOS DE LA SEMANA");
	printf("\nMaquina 1");
	printf("\nEnvases producidos: %d", produccionMaquina1);
	printf("\nEnvases desechados: %d", desechadosMaquina1);
	printf("\nPorcentaje Desechados: %.2f", porcentajeDesechados1);

	printf("\n\nMaquina 2");
	printf("\nEnvases producidos: %d", produccionMaquina2);
	printf("\nEnvases desechados: %d", desechadosMaquina2);
	printf("\nPorcentaje Desechados: %.2f", porcentajeDesechados2);

	printf("\n\nMaquina 3");
	printf("\nEnvases producidos: %d", produccionMaquina3);
	printf("\nEnvases desechados: %d", desechadosMaquina3);
	printf("\nPorcentaje Desechados: %.2f", porcentajeDesechados3);
	
	
	printf("\n\n");	
	system("pause");
}



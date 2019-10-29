#include <stdio.h>
#include <stdlib.h>
 	/*
 	Gerardo A: Resendiz Rdz
 	26/10/19
 	gpo: 002
 	viernes 7am-9am
 	1878246
 	*/
	  //****************************************Actividad 1****************************************************
struct estudiante
{
	char nom[15];
	char sexo;                   /*aqui se creo la estructura para realizar el programa*/
	int edad;
	float notas[5];
	float prom;
}e[3];

int main()
{
	int x=0, i=0, a=0, s=0;
	float prom=0, b=0, suma=0;
	char n;
	for(i=0;i<3;i++)
	{
		suma=0;
		printf("Ingrese el nombre del estudiante: \n");
		scanf("%s", &e[i].nom);
		fflush(stdin);
		fflush(stdin);
	
		do
		{
			printf("\nIngrese el genero del estudiante(m/h)\n:");
			scanf("%c", &e[i].sexo);
			n=e[i].sexo;
			if(n=='h')
			{
				x=1;
			}
			else
			{
				if(n=='m')
				{
					x=1;
				}
				else
				{
					printf("\nError al selecionar el genero, solo son dos opciones...");
					x=0;
				}
		
			}
		}while(x!=1);
			
			
		printf("\nIngrese la edad de la persona\n:");
		scanf("%d", &e[i].edad);
		while(e[i].edad<0 || e[i].edad>110)
		{
			printf("\nError al ingresar la edad intente de nuevo");
			printf("\nIngrese la edad de la persona\n:");
			scanf("%d", &e[i].edad);
		}
		for(a=0;a<5;a++)
		{
			printf("\nIngrese la nota %d del estudiante %d \n:", (a+1), (i+1));
			scanf("%f", &e[i].notas[a]);
			while(e[i].notas[a]<0 || e[i].notas[a]>100)
			{
				printf("\nError al momento de ingresar la nota, intente de nuevo en un intervalo de 0-100...");
				printf("\nIngrese la nota %d del estudiante %d \n:", (a+1), (i+1));
				scanf("%f", &e[i].notas[a]);				
			}
			suma=suma+e[i].notas[a];
		}
		e[i].prom=(float)suma/5;
		printf("\nEl promedio del estudiante es de %.2f \n", e[i].prom);
		b=e[0].prom;
		if(e[i].prom>b)
		{
			b=e[i].prom;
		}
	}
	printf("\nEl promedio mas alto fue de %.2f", b);
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//****************************actividad 1*******************************************
	
	int cal;
	
	printf("ingrese la calificacion del alumno\n");
	scanf("\n%d", &cal);

	if(cal>=5 && cal<=10)
	{
		printf("apto\n");

	}
		if (cal<=0 || cal<4)
		{
			printf("no apto\n");
		}
	
	else
	{
		printf("calificacion ingresada es incorrecta\n");
	}
	
	//******************************actividad 2******************************************
	
	int op;
	
	printf("ingrese un numero del dia de la semana\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			printf("lunes\n");
		break;
		case 2:
			printf("martes\n");
		break;
		case 3:
			printf("miercoles\n");
		break;
		case 4:
			printf("jueves\n");
		break;
		case 5:
			printf("viernes\n");
		break;
		case 6:
			printf("sabado\n");
		break;
		case 7:
			printf("domingo\n");
		default:
		printf("numero ingresado es incorrecto\n");						
	}
	
	//*************************actividad extra*******************************************
	
	
	int carrera;
	
	printf("ingrese la opcion que quiera del 1 al 5\n");
	scanf("%d", &carrera);
	
	switch(carrera)
	{
		case 1:
			printf("fisica\n");
		break;
		case 2:
			printf("matematicas\n");
		break;
		case 3:
			printf("lic. en ciencias cumputacionales\n");
		break;
		case 4:
			printf("actuaria\n");
		break;
		case 5:
			printf("multimedia\n");
		break;
		default:
			printf("seguridad\n");
	}
	
	
	return 0;
}

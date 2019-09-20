/*
autor: Gerardo A. Resendiz Rodriguez
fecha: 20/09/2019
grupo: 006
horario: viernes 7am-9am
matricula: 1878246
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//******************************actividad 1*******************************************
	int cal=0, i=0, sum=0;
	float prom=0;
	
	for(i=1; i<=10; i++)
	{
		printf("ingrese las calificaciones del alumno\n");
		scanf("%d", &cal);
		sum=cal+sum;
	}
	printf("\nla suma de las calificaciones es %d\n", sum);
	prom=sum/10;
	printf("el promedio del alumno es %f\n", prom);
	
	if(prom>=7)
	{
		printf("APROBADO\n");
	}
	else
	{
		printf("reprobado\n");
	}
	
	//******************************actividad 2*******************************************
	
	int base=0, exponente=0, r=0;
	
	printf("ingrese la base\n");
	scanf("%d", &base);
	printf("ingrese el exponente\n");
	scanf("%d", &exponente);
	
	
	r=pow(base,exponente);
	printf("r=%d", r);
	
	return 0;
}

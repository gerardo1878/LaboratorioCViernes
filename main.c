#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//*******************************************************problema 1*******************************************
	
	int nC[24];
	int i=0, R=0, op;
	
	for(i=0; i<24; i++)
	{
		printf("ingrese el numero de coches\n");
		scanf("%d", &nC[i]);
	}
	nC[2]=57, nC[21]=57;
	
	do
	{
	printf("ingrese un valor a R\n");
	scanf("%d", &R);
	
	nC[R];
	printf("la hora %d y el numero de coches es %d\n\n", R, nC[R]);
	
	printf("desea volver a preguntar\n 0-no\n 1-si\n");
	scanf("%d", &op);
	}while(op!=0);
	
	//*******************************************************problema 2*******************************************
	
	int A=8,B=4;
	
	printf("\nactividad 2\n");
	R=A/B;
	printf("la division de A/B es R= %d\n", R);
	
	nC[R];
	printf("numero de coches es %d", nC[R]);
	
	
	return 0;
}

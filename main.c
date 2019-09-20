#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//***************************actividad 1*****************************
	int a=0,op=0,suma=0,nums=0;

	 printf("actividad 1\n\n");
	do
	{
		printf("introduzca un numero entero\n");
		scanf("%d", &a);
		printf("¿desea introducir otro? (s/n)\n 1-si\n 0-no\n");
		scanf("%d", &op);
		suma=suma+a;
		nums=nums+1;
		
	} while(op!=0);
	printf("la suma de los numeros enteros es %d\n",suma);
	
	//****************************actividad 2****************************
	
	float n=0;
	printf("actividad 2\n\n");
	do{
		printf("ingrese un valor para n\n");
		scanf("%f", &n);
		printf("ingreso el numero %.2f\n", n);
		
	}while(n<=100);
	return 0;
}

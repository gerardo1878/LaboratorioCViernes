#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=0,y=0;
	
	printf("actividad 1\n");
	printf("ingrese un valor para x\n");
	scanf("%d", &x);
	printf("ingrese un valor para y\n");
	scanf("%d", &y);
	
	if(x>y)
	{
		printf("la variable x es mayor");
	}
		else
		{
			if(y>x)
			{
				printf("la variable y es mayor");
			}
			else
			{
				printf("los valores ingresados son iguales\n\n\n");
			}
		}
	/*******************************actividad 2 *************************************/
	
	int A=5,B=3,C=-12;
	printf("\n\nactividad 2\n");
	if(A>3)
	{
		printf("condicion verdadera\n");
	}
	else{
		printf("condicion falsa\n");
	}
	if(A<C)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(B!=C)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(A==3)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(A*B==15)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(C/B<A)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(A+B+C==5)
	{
		printf("condicion verdadera\n");
	}
	
		
	
	
	return 0;
}
   

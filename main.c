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
	if(C/B==-10)
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
	else
	{
		printf("condicion falsa\n");
	}
	if((A+B==8) && (A-B==2))
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if((A+B == 8) || (A-B == 6))
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");	
	}	
	if(A>3 && B>3 && C<3)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	
	//************************************actividad 3***********************************

	int a,b,c;
	
	printf("\n\nactividad 3\n");
	printf("ingrese un valor para a\n");
	scanf("%d", &a);
	printf("ingrese un valor para b\n");
	scanf("%d", &b);
	printf("ingrese valores para c\n");
	scanf("%d", &c);
	
	if(a>3)
	{
		printf("condicion verdadera\n");
	}
	else{
		printf("condicion falsa\n");
	}
	if(a<c)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(b!=c)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(a==3)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(a*b==15)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(c/b<a)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(c/b==-10)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if(a+b+c==5)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if((a+b==8) && (a-b==2))
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	if((a+b == 8) || (a-b == 6))
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");	
	}	
	if(a>3 && b>3 && c<3)
	{
		printf("condicion verdadera\n");
	}
	else
	{
		printf("condicion falsa\n");
	}
	
	


	return 0;
}
   

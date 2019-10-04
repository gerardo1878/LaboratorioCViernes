#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int VEOE[6][10][2];
	int i=0,j=0,q=0;
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<10; j++)
		{
			for(q=0; j<2; j++)
			{
				printf("ingrese el numero de casillas VEOE[%d][%d][%d]\n",(i+1),(j+1),(q+1));
				scanf("%d", &VEOE[i][j][q]);
			}
		}
		
	}
	if(i==3 && j==7 && q==1)
				{
					VEOE[i][j][q]=4224;
				}
				
	i=0;
	j=0;
	q=0;
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<10; j++)
		{
			for(q=0; j<2; j++)
			{
				printf("%d\t",VEOE[i][j][q]);
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	printf("\n el valor de la casilla [4][8][2] es igual a\n: %d", VEOE[3][7][1]);			
				
	
	return 0;
}

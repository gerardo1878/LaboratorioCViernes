#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     int main() {
	int VEOE[6][10][2];
	int  i=0, j=0, q=0;
	int b=1;
	for(i=0;i<6;i++)
	{
		printf("\nEdificio %d\n", (i+1));
		printf("\nEmpleado \t    Oficina\n");
		for(j=0;j<10;j++)
		{
			for(q=0;q<2;q++)
			{
				VEOE[i][j][q]= b;
				
				if(i==3 && j==7 && q==1)
				{
					VEOE[i][j][q]= 4244;
					
				}
				printf("%d\t\t\t", VEOE[i][j][q]);
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	
	printf("\nEl empleado 8 de la oficina 2 en el edificio 4 vendio %d \n: %d", VEOE[3][7][1]);
	
	/*********************************************************************Actividad 2**********************************************************/
	i=0;
	j=0;
	q=0;
	
	for(i=0;i<6;i++)
	{
		printf("\nEdificio %d\n", (i+1));
		printf("\nEmpleado \t    Oficina\n");
		for(j=0;j<10;j++)
		{
			for(q=0;q<2;q++)
			{
				VEOE[i][j][q]= b+10;
				if(i==3 && j==7 && q==1)
				{
					VEOE[i][j][q]= 4244;
				}
				printf("%d\t\t\t", VEOE[i][j][q]);
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	printf("\nEl empleado 8 de la oficina 2 en el edificio 4 vendio %d \n: %d", VEOE[3][7][1]);
	printf("\n%d", VEOE[9][3][1]);/*Es verifico la pregunta*/

  return 0;
}

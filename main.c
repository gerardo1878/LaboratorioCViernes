#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <CTYPE.H>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//************************************************************************actividad 1***************************************
	char a[30], b[30];
    int i, j;
    int palindromo = 1;
    printf("Escribe una cadena: ");
    fflush(stdout);
    gets(a);
    j=strlen(a)-1;
    
	for(i=0; i<strlen(a)/2; i++, j--) 
	{
        printf("Comprobando %c==%c\n", *(a+i), *(a+j));
        if (*(a+i)!=*(a+j)) 
		{
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
        printf("\nEs un palíndromo.\n");
    else
        printf("\nNo es un palíndromo.\n");
        
    //************************************************************************actividad 2**************************************    

	return 0;
}

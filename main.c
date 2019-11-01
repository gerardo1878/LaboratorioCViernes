#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Gerardo A. Resendiz Rodríguez
1/11/2019
gpo: 006
viernes 7am-9am
1878246 */

char palabra[40]; char *C=palabra; int con=0;  //con=contador de vocales


int main(int argc, char *argv[]) {
	printf("actividad 1\n");
 //******************************************actividad 1***************************************
 char palabra[40]; char *C=palabra; int con=0;
 printf("Dame una palabra: "); gets(palabra);

 while (*C!=0)
 { if (*C=='a' || *C=='A' || *C=='e' || *C=='E' || *C=='i' || *C=='I' || *C=='o' || *C=='O'
	|| *C=='u' || *C=='U')
 con++;
 C++;
 }
 printf("\nEl numero de vocales es: %d\n", con);
 
	//***************************************actividad 2****************************************
	printf("\nactividad 2\n");
	
	int a=0, b=0, s=0;
	int *A=0, *B=0, *S;
	
	printf("ingrese un valor para a: ");
	scanf("%d", &a);
	printf("\ningrese un valor para b: ");
	scanf("%d", &b);
	
	*A=&a;
	*B=&b;

	
	s=(*A)+ (*B);
	*S=&s; 
	printf("\nla suma de los 2 punteros es = %d ", *S);   
	
	

	return 0;
}

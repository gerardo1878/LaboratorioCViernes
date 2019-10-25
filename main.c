
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* gerardo antonio resendiz rdz 
1878246 */

int main() {
    int primos, n, d;
    int es_primo;
//*********************************************************actividad 1*************************************************************+
    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &primos);

    n = 2;
    while (primos > 0) {

        /* determinar si n es primo */
        es_primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = 0;
                break;
            }
        }

        /* mostrar el numero
         * y actualizar el contador */
        if (es_primo) {
            printf("%d ", n);
            primos--;
        }
        n++;
    }

    printf("\n");
    
    //**************************************************************actividad 2********************************************************
    
    printf("\n actividad 2\n");
    
    int y=0, pot=0,r=0; //declarar variables
    
    printf("ingrese un numero entero"); //ingrese el valor que queremos elvar a algun expoenente
    scanf("%d", &y);
    
    if(y>0)
    {
    	printf("ingrese la potencia que desea elevar a y"); //ingrese el exponente que desea elevar a y
    	scanf("%d", &pot);
    	
    	r=pow(y,pot);  //aqui se hace el calculo para elvear el numero ingresado
    	printf("%d^%d=%d",y,pot,r); //aqui el resultado de la operacion.
	}
    
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int ingreso;
    float ingresoDatosA;
    float ingresoDatosB;
    float resultado1;
    float resultado2;
    float resultado3;
    float resultado4;
    float resultado5;
    int flag=0;

    do{
       printf("MENÚ:\n1-Ingreso Operando A\n2- Ingreso Operando B\n3- Realizar Operaciones\n4- Mostrar los resultados\n5- Salir\nQue quiere hacer?:\t");
       utn_getNumero(&ingreso,5,"Ingrese el numero de su opcion:\t","ERROR!!! su error es:",1,6);
       switch(ingreso)
    {
    case 1:
        utn_getNumeroDecimal(&ingresoDatosA,5,"Ingrese un numero (con o sin decimales)","ERROR!!! Su error es:",-1001,1001);
        break;
    case 2:
        utn_getNumeroDecimal(&ingresoDatosB,5,"Ingrese un numero (con o sin decimales)","ERROR!!! Su error es:",-1001,1001);
        break;
    case 3:

        break;
    case 4:
        break;
    case 5:
        flag=1;
        break;
    default:
        break;
    }
    }while(flag==0);

    return 0;
}

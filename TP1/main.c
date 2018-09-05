#include <stdio.h>
#include <stdlib.h>
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
       printf("MENU:\n1-Ingreso Operando A\n2- Ingreso Operando B\n3- Realizar Operaciones\n4- Mostrar los resultados\n5- Salir");
       utn_getNumero(&ingreso,5,"\nIngrese el numero de su opcion:\t","ERROR!!! su error es:",1,6);
       switch(ingreso)
    {
    case 1:
        utn_getNumeroDecimal(&ingresoDatosA,5,"Ingrese un numero (con o sin decimales)","ERROR!!! Su error es:",-1001,1001);
        system("cls");
        break;
    case 2:
        utn_getNumeroDecimal(&ingresoDatosB,5,"Ingrese un numero (con o sin decimales)","ERROR!!! Su error es:",-1001,1001);
        system("cls");
        break;
    case 3:
        system("cls");
        utn_realizarOperaciones(&ingresoDatosA,&ingresoDatosB,&resultado1,&resultado2,&resultado3,&resultado4,&resultado5);
        break;
    case 4:
        system("cls");
        utn_imprimirResultados(&resultado1,&resultado2,&resultado3,&resultado4,&resultado5);
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

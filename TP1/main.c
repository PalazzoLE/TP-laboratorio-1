#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ingreso;
    int ingresoDatosA;
    int ingresoDatosB;
    int flag=0;

    do{
        printf("MENÚ:\n1-Ingreso Operando A\n2- Ingreso Operando B\n3- Realizar Operaciones\n4- Mostrar los resultados\n5- Salir\nQue quiere hacer?:\t");
        scanf("%d",&ingreso);
       switch(ingreso)
    {
    case 1:

        break;
    case 2:
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

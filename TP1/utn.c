#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
static int getInt (int* numero);
static float getFloat (float* numero);

int utn_getNumero(int* pNumero,int reintentos,char* mensaje,char* mensajeError,int min,int max)
{
    int retorno = -1;
    int auxiliarNumero;

    for(;reintentos > 0;reintentos--)
    {
        printf("%s",mensaje);
        if(getInt(&auxiliarNumero) == 0)
        {
            if(auxiliarNumero < max && auxiliarNumero >= min)
            {
                *pNumero = auxiliarNumero;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s",mensajeError);
                printf("\nfuera de rango [%d-%d]\n",min,max);
            }
        }
        else
        {
            printf("%s",mensajeError);
            printf("\nNo es un numero\n");
            __fpurge(stdin);
        }
    }
    return retorno;
}

float utn_getNumeroDecimal (float* pNumero,int reintentos,char* mensaje,char* mensajeError,float min,float max){
    int retorno = -1;
    float auxiliarNumero;

    for(;reintentos > 0;reintentos--)
    {
        printf("%s",mensaje);
        if(getFloat(&auxiliarNumero) == 0)
        {
            if(auxiliarNumero < max && auxiliarNumero >= min)
            {
                *pNumero = auxiliarNumero;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s",mensajeError);
                printf("\nfuera de rango [%f-%f]\n",min,max);
            }
        }
        else
        {
            printf("%s",mensajeError);
            printf("\nNo es un numero\n");
            __fpurge(stdin);
        }
    }
    return retorno;
}

static int getInt (int* numero){
    int ingreso;
    int retorno;
    if (scanf("%d",&ingreso) == 1){
        *numero = ingreso;
        retorno=0;
    }else{
        retorno=-1;
    }
    return retorno;
}

static float getFloat (float* numero){
    float ingreso;
    int retorno;
    if (scanf("%f",&ingreso) == 1){
        *numero = ingreso;
        retorno=0;
    }else{
        retorno=-1;
    }
    return retorno;
}

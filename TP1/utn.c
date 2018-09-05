#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "utn.h"
static int getInt (int* numero);
static float getFloat (float* numero);
static float operacionSuma(float* operando1, float* operando2);
static float operacionResta(float* operando1, float* operando2);

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
            fflush(stdin);
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
                fflush(stdin);
            }
        }
        else
        {
            printf("%s",mensajeError);
            printf("\nNo es un numero\n");
            fflush(stdin);
        }
    }
    return retorno;
}

int utn_realizarOperaciones (float* pNumero1,float* pNumero2,float* resultadoSuma,float* resultadoResta,
                             float* resultadoMultiplicacion,float* resultadoDivision,float* resultadoFactorial)
{
    int retorno = 0;
    float auxiliarOperando1= *pNumero1;
    float auxiliarOperando2= *pNumero2;
    float auxiliarResultado1;
    float auxiliarResultado2;
    float auxiliarResultado3;
    float auxiliarResultado4;
    float auxiliarResultado5;

    auxiliarResultado1 = operacionSuma(&auxiliarOperando1,&auxiliarOperando2);
    auxiliarResultado2 = operacionResta(&auxiliarOperando1,&auxiliarOperando2);
    *resultadoSuma = auxiliarResultado1;
    *resultadoResta= auxiliarResultado2;

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

static float operacionSuma(float* operando1, float* operando2)
{
    float auxiliarOperando= *operando1;
    float auxiliarOperando2= *operando2;
    float resultado=0;

    resultado=auxiliarOperando+auxiliarOperando2;

    return resultado;
}

static float operacionResta(float* operando1, float* operando2)
{
    float auxiliarOperando= *operando1;
    float auxiliarOperando2= *operando2;
    float resultado=0;

    resultado=auxiliarOperando-auxiliarOperando2;

    return resultado;
}

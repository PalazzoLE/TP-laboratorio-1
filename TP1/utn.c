#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "utn.h"
static int getInt (int* numero);
static float getFloat (float* numero);
static float operacionSuma(float* operando1, float* operando2);
static float operacionResta(float* operando1, float* operando2);
static float operacionMultiplicacion(float* operando1, float* operando2);
static float operacionDivision (float* operando1, float* operando2);
static float operacionFactorial (float* operando1);

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
    auxiliarResultado3 = operacionMultiplicacion(&auxiliarOperando1,&auxiliarOperando2);
    auxiliarResultado4 = operacionDivision(&auxiliarOperando1,&auxiliarOperando2);
    if(operacionFactorial(&auxiliarOperando1)==-1){
        printf("ERROR!!! No se puede realizar una factorial con un negativo o 0");
    }else{
        auxiliarResultado5 = operacionFactorial(&auxiliarOperando1);
    }
    *resultadoSuma = auxiliarResultado1;
    *resultadoResta= auxiliarResultado2;
    *resultadoMultiplicacion = auxiliarResultado3;
    *resultadoDivision = auxiliarResultado4;
    *resultadoFactorial = auxiliarResultado5;

    return retorno;
}

void utn_imprimirResultados(float* resultadoSuma,float* resultadoResta,
                             float* resultadoMultiplicacion,float* resultadoDivision,float* resultadoFactorial)
{
    printf("LOS RESULTADOS DE LAS OPERACIONES SON:\n *SUMA: %.2f\n*RESTA: %.2f\n*MULTIPLICACION: %.2f\n",*resultadoSuma,*resultadoResta,*resultadoMultiplicacion);
    if (*resultadoDivision == -10000){
        printf("*Division: no pudo realizarse");
    }else{
        printf("*Division: %.2f\n",*resultadoDivision);
    }
    if (*resultadoFactorial == -1){
        printf("*Factorial: no pudo realizarse");
    }else{
        printf("*Factorial: %.2f\n",*resultadoFactorial);
    }

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

static float operacionMultiplicacion(float* operando1, float* operando2)
{
    float auxiliarOperando= *operando1;
    float auxiliarOperando2= *operando2;
    float resultado=0;
    resultado = auxiliarOperando * auxiliarOperando2;
    return resultado;
}

static float operacionDivision (float* operando1, float* operando2)
{
    float auxiliarOperando= *operando1;
    float auxiliarOperando2= *operando2;
    float resultado=0;
    if (auxiliarOperando2==0){
        printf("\nLa operacion de Division no pudo realizarse: (divisor es 0)\nPor favor reingrese los operandos e intente devuelta");
        return -10000;
    }else{
        resultado = auxiliarOperando / auxiliarOperando2;
    }
    return resultado;
}

static float operacionFactorial (float* operando1)
{
    float auxiliarOperando= *operando1;
    long respuesta;
    int i;
    if(auxiliarOperando<=1){
        respuesta = -1;
    }else{
        respuesta=auxiliarOperando;
        for(i=auxiliarOperando-1;i>1;i--)
        {
            respuesta=respuesta*i;
        }
    }
    return respuesta;
}

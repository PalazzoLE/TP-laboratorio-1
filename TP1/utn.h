#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/**
    utn_getEntero : pide un entero al usuario
    @param pNumero: puntero a numero
    @param reintentos: cantidad de reintentos
    @param mensaje: mensaje de ingreso
    @param mensajeError: mensade de error
    @param min: minimo
    @param max: maximo
    @return : 0 OK, -1 ERROR
*/
int utn_getNumero(int* pNumero,int reintentos,char* mensaje,char* mensajeError,int min,int max);

/**
    utn_getEntero : pide un entero al usuario
    @param pNumero: puntero a numero
    @param reintentos: cantidad de reintentos
    @param mensaje: mensaje de ingreso
    @param mensajeError: mensade de error
    @param min: minimo
    @param max: maximo
    @return : 0 OK, -1 ERROR
*/
float utn_getNumeroDecimal (float* pNumero,int reintentos,char* mensaje,char* mensajeError,float min,float max);

/**
    utn_realizarOperaciones : Realiza una suma, una resta, una multiplicacion, una division, y una factorial
    @param pNumero1: puntero al primer numero
    @param pNumero2: puntero al segundo numero
    @param resultadoSuma: puntero al resultado de la suma
    @param resultadoResta: puntero al resultado de la resta
    @param resultadoMultiplicacion: puntero al resultado de la multiplicacion
    @param resultadoDivision: puntero al resultado de la division
    @param resultadoFactorial: puntero al resultado de la factorial
    @return 0 OK, -1 ERROR
 */

int utn_realizarOperaciones (float* pNumero1,float* pNumero2,float* resultadoSuma,float* resultadoResta,
                             float* resultadoMultiplicacion,float* resultadoDivision,float* resultadoFactorial);

/**
    utn_imprimirResultados: imprime los resultados de las operaciones anteriormente hechas
    @param resultadoSuma: puntero al resultado de la suma
    @param resultadoResta: puntero al resultado de la resta
    @param resultadoMultiplicacion: puntero al resultado de la multiplicacion
    @param resultadoDivision: puntero al resultado de la division
    @param resultadoFactorial: puntero al resultado de la factorial
 */
void utn_imprimirResultados(float* resultadoSuma,float* resultadoResta,
                             float* resultadoMultiplicacion,float* resultadoDivision,float* resultadoFactorial);
#endif // UTN_H_INCLUDED

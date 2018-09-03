#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/**
    utn_getEntero : pide un entero al usuario
    @param pEdad: puntero a edad
    @param reintentos: cantidad de reintentos
    @param mensaje: mensaje de ingreso
    @param mensajeError: mensade de error
    @param min: minimo
    @param max: maximo
    @return : 0 OK, -1 ERROR
*/
int utn_getNumero(int* pNumero,int reintentos,char* mensaje,char* mensajeError,int min,int max);

float utn_getNumeroDecimal (float* pNumero,int reintentos,char* mensaje,char* mensajeError,float min,float max);

#endif // UTN_H_INCLUDED

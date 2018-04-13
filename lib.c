#include <stdio.h>
#include <stdlib.h>
#include "lib.h"



/** \brief Calcula la adicion entre dos numeros enteros long solicitados.
*
* \param Entero almacenado en long n1.
* \param Entero almacenado en long n2.
*
* \return El resultado en la variable suma.
*
*/
int sumar (long x, long y )
{
    long suma=0;
    suma=x+y;

    return suma;
}

/** \brief Calcula la resta entre dos numeros enteros long solicitados.
*
* \param Entero almacenado en long n1.
* \param Entero almacenado en long n2.
*
* \return El resultado en la variable resta.
*
*/
int restar (long x, long y )
{
    long resta=0;
    resta=x-y;

    return resta;
}

/** \brief Calcula la multiplicacion entre dos numeros enteros long solicitados.
*
* \param Entero almacenado en long n1.
* \param Entero almacenado en long n2.
*
* \return El resultado de la operacion en la variable resta .
*
*/
int multiplicar(long x, long y )
{
    long producto=0;
    producto=x*y;

    return producto;
}

/** \brief Calcula la division entre dos numeros enteros long solicitados.
*
* \param Entero almacenado en long n1 casteado como float para obtener la mejor exactitud.
* \param Entero almacenado en long n2 casteado como float para obtener la mejor exactitud.
*
* \return El resultado de la operacion en la variable producto con tres decimales .
*  Validacion: ERROR -1, El divisor debe ser distinto de 0.
*/
float dividir(long x, long y )
{
    float cociente;
    cociente=(float)x/(float)y;
    if(x!=0&&y==0)
        {
        system("COLOR 4");
        printf("*********************************************\n");
        printf("*ERROR -1, el divisor debe ser distinto de 0* \n");
        printf("*********************************************\n");
        return -1;
        }
     if(x==0&&y==0)
        {
         cociente=0;

        }

    return cociente;
}

/** \brief Calcula el factoreo de un numero entero long solicitado.
*
* \param Entero almacenado en long n1.
*
* \return El resultado de la operacion en la variable producto con tres decimales .
*  Validacion: ERROR -2, n1 debe estar entre 0 y 31. No se puede factorear numeros negativo.
*                                                    Valores de n1 mayores a 31 causan overflow de stack.
*/
int unsigned factorear(long x)
{
    long factoreo=0;
    if (x==1||x==0)
        {
         factoreo=1;
         return factoreo;
        }
    if (x>0&&x<32)
        {
        factoreo=x*factorear(x-1);
        return factoreo;

        }
       else
       {
        system("COLOR 4");
        printf("***************************************************************\n");
        printf("*ERROR -2, el numero debe ir de 0 a 31 para calcular factorial*\n");
        printf("***************************************************************\n");
        return -2;
       }
}

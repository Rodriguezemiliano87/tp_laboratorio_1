#include <stdio.h>
#include <stdlib.h>
#include "lib.h"




int sumar(long x, long y );
int restar (long x, long y );
int multiplicar(long x, long y );
float dividir(long x, long y );
int unsigned factorear(long n1);


int main()
{
    int opcion=0;
    long n1=0, n2=0;
    long suma=0, resta=0, producto=0, factoreo = 0;
    float cociente=0;
    do
    {
        system("COLOR 3");
        system("cls");
        printf("\n     Bienvenidos a mi primera calculadora!!\n\n");
        printf("   -Porfavor ingrese los comandos para operar\n\n");

        printf("  *****************************************\n");
        printf("  *****************************************\n");
        printf("  **  1- Ingresar 1er operando (A=%ld)              \n",n1);
        printf("  **  2- Ingresar 2do operando (B=%ld)              \n",n2);
        printf("  **  3- Calcular la suma (%ld)                     \n",suma);
        printf("  **  4- Calcular la resta (%ld)                   \n",resta);
        printf("  **  5- Calcular la division (%.2f)                \n",cociente);
        printf("  **  6- Calcular la multiplicacion (%ld)          \n",producto);
        printf("  **  7- Calcular el factorial de A (%d)                \n",factoreo);
        printf("  **  8- Calcular todas las operaciones             \n");
        printf("  **  9- Salir                                     \n");
        printf("  *****************************************\n");
        printf("  *****************************************\n\n");
        printf("    Seleccion de comandos:\n");
        printf("    ----------------------\n\n");

        switch(opcion)
        {
            case 1:
                printf( "1- Ingresar 1er operando (A=x)  =");
                scanf("%ld",&n1);
                break;
            case 2:
                printf( "2- Ingresar 2do operando (B=y) =");
                scanf("%ld",&n2);
                break;
            case 3:
                suma = sumar(n1,n2);
                printf( "Calculando la suma... = %ld\n",suma);
                break;
            case 4:
                resta = restar(n1,n2);
                printf( "Calculando la resta... = %ld\n",resta);
                break;
            case 5:
                cociente = dividir(n1,n2);
                printf( "Calculando la division... = %.3f\n",cociente);
                break;
            case 6:
                producto = multiplicar(n1,n2);
                printf( "Calculando la multiplicacion... = %d\n",producto);
                break;
            case 7:
                factoreo = factorear(n1);
                printf( "7- El factorial de %ld es: %d\n",n1, factoreo);
                break;
            case 8:
                suma = sumar(n1,n2);
                resta = restar(n1,n2);
                cociente = dividir(n1,n2);
                producto = multiplicar(n1,n2);
                factoreo = factorear(n1);
                printf( "8- Calculando todas las operaciones: \n");
                printf(" ------------------------------------\n\n");
                printf( "  *Suma: (%ld+%ld)= %ld\n",n1,n2,suma);
                printf( "  *Resta: (%ld-%ld)= %ld\n",n1,n2,resta);
                printf( "  *Division: (%ld/%ld)= %.3f\n",n1,n2,cociente);
                printf( "  *Multiplicacion: (%ld*%ld)= %d\n",n1,n2,producto);
                printf( "  *Factorial de (%ld!)= %ld\n\n",n1, factoreo);
                break;

        }
     printf( "-Siguiente comando: \n");
     scanf("%d",&opcion);
    }while(opcion!=9);
return 0;
}

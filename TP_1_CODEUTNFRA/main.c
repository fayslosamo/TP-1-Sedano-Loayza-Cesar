#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int numeroA = 0;
    int numeroB = 0;
    float X;
    float Y;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        if (numeroA == 1)
        {
            printf("1- Ingresar 1er operando (A = %f)\n", X);
        }
        else
        {
            printf("1- Ingresar 1er operando (A = ---Ingrese Un Numero--- )\n");
        }
        if (numeroB == 1)
        {
            printf("2- Ingresar 2do operando (B = %f)\n", Y);
        }
        else
        {
            printf("1- Ingresar 1er operando (B = ---Ingrese Un Numero--- )\n");
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese un valor para A: ");
            scanf("%f",&X);
            numeroA = 1;
            break;
        case 2:
            printf("Ingrese un valor para B: ");
            scanf("%f",&Y);
            numeroB = 1;
            break;
        case 3:
            operacionSuma(X,Y,numeroA,numeroB);
            break;
        case 4:
            operacionResta(X,Y,numeroA,numeroB);
            break;
        case 5:
            operacionDivision(X,Y,numeroA,numeroB);
            break;
        case 6:
            operacionMultiplicacion(X,Y,numeroA,numeroB);
            break;
        case 7:
            operacionFactorial(X,numeroA);
            break;
        case 8:
            todasLasOperaciones(X,Y,numeroA,numeroB);
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }

    return 0;
}

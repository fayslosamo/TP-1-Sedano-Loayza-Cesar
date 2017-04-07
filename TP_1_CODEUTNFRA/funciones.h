#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void operacionSuma(float X, float Y, int numeroA, int numeroB)
{
    if(numeroA == 1 && numeroB == 1)
    {
        printf("A + B es : %f\n", X + Y);
    }
    else
    {
        printf("INTENTE DE NUEVO\n");
    }
}

void operacionResta(float X, float Y, int numeroA, int numeroB)
{
    if(numeroA == 1 && numeroB == 1)
    {
        printf("X - Y es: %f\n",X - Y);
    }
    else
    {
        printf("INTENTE DE NUEVO\n");
    }

}

void operacionDivision(float X, float Y, int numeroA, int numeroB)
{
    if(numeroA == 1 && numeroB == 1)
    {
        printf("A / B es: %f\n", X / Y);

        if(Y == 0.0)
        {
            printf("ERROR B!=0\n");
        }
    }
    else
    {
        printf("INTENTE DE NUEVO\n");
    }
}

void operacionMultiplicacion(float X, float Y, int numeroA, int numeroB)
{
    if(numeroA == 1 && numeroB == 1)
    {
        printf("A * B es: %f\n", X * Y);
    }
    else
    {
        printf("INTENTE DE NUEVO\n");
    }
}

void operacionFactorial (float X, int numeroA)
{
    int i;
    unsigned long numero = 1, numeroAnt =   1;

    if(numeroA == 1)
    {
        for(i = 1; i <= X; i++)
        {
            numeroAnt = numero;
            numero = numero * i;

            if(numero/numeroAnt != i)
            {
                printf("Numero es demasiado GRANDE\n");
                printf("%d! = %lu fue EL MAXIMO factorial \n", i-1, numeroAnt);
                return;
            }
        }

        printf("A! es: %lu\n",numero);
    }
    else
    {
        printf("INTENTE DE NUEVO");
    }

}

void todasLasOperaciones(float X, float Y, int numeroA, int numeroB)
{
    if(numeroA == 1 && numeroB == 1)
    {
        operacionSuma(X,Y,numeroA,numeroB);
        operacionResta(X,Y,numeroA,numeroB);
        operacionDivision(X,Y,numeroA,numeroB);
        operacionMultiplicacion(X,Y,numeroA,numeroB);
        operacionFactorial(X,numeroA);
    }
    else
    {
        printf("INTENTE DE NUEVO\n");
    }

}

#endif // FUNCIONES_H_INCLUDED

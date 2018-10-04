#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
int main()
{
    char numerotelefono [50];

    if(utn_getNumeroTelefono(numerotelefono,50,3,"\nIngrese numero telefono\n","\nerror numero de telefono no valido\n")==0)
        {
            printf("\nnumero de telefono: %s \n",numerotelefono);
        }

    return 0;
}

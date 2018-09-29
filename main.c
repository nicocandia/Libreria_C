#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define TAMANIO_cuit 13
int main()
{
    char cuitoCuil[TAMANIO_cuit];

    if(utn_getCuiloCuit(cuitoCuil,TAMANIO_cuit,3,"\nIngrese cuit o cuil\n","\nerror,cuit no valido")==0)
        {
            printf("\ncuit valido\n");
        }else {printf("\ncuit no valido\n");}
    return 0;
}

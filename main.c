#include <stdio.h>
#include "tabla.h"
#define SALTO 1.0

int main(void)
{
    float a = 10.0;
    float b = 20.0;
    float c = SALTO;

    armarTablaDeConversion(a , b , SALTO);

    
    return 0;
}
#include "tabla.h"
#include "conversion.h"
#include <stdio.h>
#include <assert.h>

int numeroPorDefecto = 1;
void armarTablaDeConversion(float valorInicialNudos, float valorFinalNudos, float saltoDeValores){
    assert(valorInicialNudos >= 0 && valorFinalNudos >= valorInicialNudos && saltoDeValores > 0);
    if(numeroPorDefecto == 1){
        printf("|   Nudos       |   Km/h      |\n");
        printf("|---------------|-------------|\n");
        numeroPorDefecto = 2; 
    }
    for (float valorActualNudos = valorInicialNudos; valorActualNudos <= valorFinalNudos; valorActualNudos += saltoDeValores) {
        float kmh = convetirEnKm(valorActualNudos); 
        printf("|   %7.2f     |   %7.4f   |\n", valorActualNudos, kmh); 
    }
}

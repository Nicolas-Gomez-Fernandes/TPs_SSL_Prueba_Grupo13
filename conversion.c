#include "conversion.h"

int main (){
    convertirEnKm(velocidadEnNudos);
}

float convertirEnKm (float velocidadEnNudos){
    velocidadEnKm = velocidadEnNudos * 1,852;
    return velocidadEnKm;
}
#include "conversion.h"


float convertirEnKm (float velocidadEnNudos){
    float velocidadEnKm;
    velocidadEnKm = velocidadEnNudos * 1,852;
    return velocidadEnKm;
}
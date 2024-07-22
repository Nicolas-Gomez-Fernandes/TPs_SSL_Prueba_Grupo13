#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "tabla.h"

int main(int argc, char *argv[]) {
    float valorInicialNudos, valorFinalNudos, saltoDeValores; 

    if (argc < 3) {
        fprintf(stderr, "Uso: %s inicio fin [incremento]\n", argv[0]);
        return 1;
    }

    valorInicialNudos = atof(argv[1]);
    valorFinalNudos = atof(argv[2]);

    if (argc >= 4) {
        saltoDeValores = atof(argv[3]);
    } else {
        saltoDeValores = 1.0;
    }


	armarTablaDeConversion(valorInicialNudos, valorFinalNudos, saltoDeValores);
    return 0;
}

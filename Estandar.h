// estandar.h

#ifndef ESTANDAR_H
#define ESTANDAR_H

#include <stdio.h>

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        // Manejo de división por cero
        return 0.0; // Puedes cambiar esto según tu lógica específica
    }
}

#endif // ESTANDAR_H

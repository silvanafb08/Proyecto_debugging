#include <stdio.h>
#include "Estandar.h"


void calculadora_estandar() {
    float num_primero, num_segundo;
    int operacion;

    printf("\n-------------------------Calculadora estandar-------------------------\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &num_primero);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num_segundo);

    

    // Ejecutar la operación seleccionada
   do {
        // Menú de operaciones
            printf("\nSeleccione la operacion:\n");
            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("3. Multiplicacion\n");
            printf("4. Division\n");

            printf("Seleccione una opcion (1-4): ");
            scanf("%d", &operacion);
    switch (operacion) {
        case 1:
            printf("%.1f + %.1f = %.1f\n", num_primero, num_segundo, suma(num_primero, num_segundo));
            break;
        case 2:
            printf("%.1f - %.1f = %.1f\n", num_primero, num_segundo, resta(num_primero, num_segundo));
            break;
        case 3:
            printf("%.1f * %.1f = %.1f\n", num_primero, num_segundo, multiplicacion(num_primero, num_segundo));
            break;
        case 4:
            if (num_segundo != 0) {
                printf("%.1f / %.1f = %.1f\n", num_primero, num_segundo, division(num_primero, num_segundo));
            } else {
                printf("Recordemos que un divisor no puede ser 0.\n");
            }
            break;
        default:
            printf("Opcion no valida.\n");
    }
    } while (operacion < 1 || operacion > 4); // Continuar el bucle si la opción no es válida
}


void calculadora_cientifica() {
    // Implementa la lógica de la calculadora científica aquí
    printf("Calculadora cientifica seleccionada\n");
}

void calculadora_programador() {
    // Implementa la lógica de la calculadora programador aquí
    printf("Calculadora programador seleccionada\n");
}

int main() {
    int opcion;

    while (1) {
        // Menú
        printf("\n--- Menu ---\n");
        printf("1. Calculadora estandar\n");
        printf("2. Calculadora cientifica\n");
        printf("3. Calculadora programador\n");
        printf("4. Salir de la calculadora\n");

        // Solicitar la opción al usuario
        printf("Seleccione una opción (1-4): ");
        scanf("%d", &opcion);

        // Ejecutar la opción seleccionada
        switch (opcion) {
            case 1:
                calculadora_estandar();
                break;
            case 2:
                calculadora_cientifica();
                break;
            case 3:
                calculadora_programador();
                break;
            case 4:
                // Salir del bucle si la opción es 4
                printf("¡Apagando!\n");
                return 0;
            default:
                printf("\nPor favor, seleccione una opcion valida (1-4).\n");
        }
    }

    return 0;
}
#include <stdio.h>


void calculadora_estandar() {
    // Implementa la lógica de la calculadora estándar aquí
    printf("Calculadora estandar seleccionada\n");
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
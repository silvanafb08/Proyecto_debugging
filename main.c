#include <stdio.h>
#include "Estandar.h"
#include "Cientifica.h"
#include "Programador.h"


void calculadora_estandar() {
    float num_primero, num_segundo;
    int opcion_estandar;

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
            scanf("%d", &opcion_estandar);
    switch (opcion_estandar) {
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
            printf("La opcion no es valida, porfavor indique una correcta\n");
    }
    } while (opcion_estandar < 1 || opcion_estandar > 4); // Continuar el bucle si la opción no es válida
}


void calculadora_cientifica() {
    // Implementa la lógica de la calculadora científica aquí
    printf("\n-------------------------Calculadora Cientifica-------------------------\n");
    float valor_x, valor_n;
    int opcion_cientifica;
    
     do {
        // Menú de operaciones
            printf("\nSeleccione la operacion:\n");
            printf("1. 10 ^ x\n");
            printf("2. X ^ N\n");
            printf("3. X ^ 2\n");
            printf("4. Raiz cuadrada de X\n");

            printf("Seleccione una opcion (1-4): ");
            scanf("%d", &opcion_cientifica);

    switch (opcion_cientifica) {
        case 1:
            printf("Ingrese el exponente para 10: ");
            scanf("%f", &valor_x);
            printf("10 ^ %.1f = %.1f\n",valor_x, exponente10(valor_x));
          break;  
        case 2:
            
            printf("Ingrese la base: ");
            scanf("%f", &valor_x);
            printf("Ingrese el exponente: ");
            scanf("%f", &valor_n);
            
            printf("%.1f ^ %.1f = %.1f\n",valor_x,valor_n, exponentes(valor_x,valor_n));
          break; 
        case 3:
            printf("Ingrese la base para elevarlo al cuadrado: ");
            scanf("%f", &valor_x);
            printf("%.1f ^ 2 = %.1f\n",valor_x, exponente2(valor_x));
          break;
        case 4:
            printf("Ingrese el numero del que se va a sacar la raiz cuadrada: ");
            scanf("%f", &valor_x);
            printf("raiz cuadrada de %.1f es %.1f\n",valor_x, raiz(valor_x));
          break; 
            
        default:
            printf("La opcion no es valida, porfavor indique una correcta\n");
        
    }
}  while (opcion_cientifica < 1 || opcion_cientifica > 4); // Continuar el bucle si la opción no es válida

}
void calculadora_programador() {
    // Implementa la lógica de la calculadora programador aquí
    // Implementa la lógica de la calculadora científica aquí
    printf("\n-------------------------Calculadora Programador-------------------------\n");
    float valorx;
    int opcion_programador;
    char valor_n[32];
    
     do {
        // Menú de operaciones
            printf("\nSeleccione el cambio que quiere realizar\n");
            printf("1. De decimal a binario\n");
            printf("2. De decimal a Hexadecimal\n");
            printf("3. De binario a Hexadecimal\n");
            printf("4. De Hexadecimal a decimal\n");
            

            printf("Seleccione una opcion (1-4): ");
            scanf("%d", &opcion_programador);


    switch (opcion_programador) {
        case 1:
            printf("Ingrese el numero decimal: ");
            scanf("%f", &valorx);
            decimalABinario(valorx);
            break;  
        case 2:
            printf("Ingrese el numero decimal: ");
            scanf("%f", &valorx);
            decimaAHexa(valorx);
            break;  
        case 3:
            printf("Ingrese el numero binario: ");
            scanf("%s", &valor_n);
            binarioAHexa(valor_n);
            break;
        case 4:
            printf("Ingrese el numero hexadecimal: ");
            scanf("%s", &valor_n);
            printf("El cambio de el numero hexadecimal %s a decimal es de %.d\n",valor_n, hexaADecimma(valor_n));
     
            
            break;   
        default:
            printf("La opcion no es valida, porfavor indique una correcta\n");
         
        }
}  while (opcion_programador < 1 || opcion_programador > 4); // Continuar el bucle si la opción no es válida

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
                printf("\nPor favor, seleccione una opcion correcta.\n");
        }
    }

    return 0;
}
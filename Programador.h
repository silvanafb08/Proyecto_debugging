#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H

#include <stdio.h>
#include <stdlib.h> // para convertir de bin a hexa
void  decimalABinario(int x){
        if (x == 0) {
        printf("El binario es: 0\n");
        return;

    }
    int binario[50];
    int i = 0;

     while (x > 0) {
        binario[i] = x % 2;
        x = x / 2;
        i++;
    } 
    
    printf("El cambio de decimal a binaro es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

     

}

void decimaAHexa(int x){

    printf("El cambio del decimal %d a hexadecimal es: %X\n", x, x);
    

}

void binarioAHexa(const char* x){
int decimal = strtol(x, NULL, 2);
printf("El cambio de %s a hexadecimal es: %X\n", x, decimal);

}
int hexaADecimma(const char* x) {
    // Convierte la cadena hexadecimal a un número entero decimal
    int decimal = strtol(x, NULL, 16);
    return decimal;

    
}
#endif // PROGRAMADOR_H

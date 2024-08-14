#include <stdio.h>

int main() {
    char nombre[50];
   
    printf("Por favor, introduce tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin); 

    printf("¡Hola %s", nombre);

    return 0;
}

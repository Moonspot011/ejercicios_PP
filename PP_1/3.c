#include <stdio.h>

int main() {
    char nombre[50]; // Se declara un arreglo de caracteres para almacenar el nombre

    // Se pide al usuario que introduzca su nombre
    printf("Por favor, introduce tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin); // Se utiliza fgets para leer el nombre

    // Se muestra el saludo
    printf("¡Hola %s", nombre);

    return 0;
}

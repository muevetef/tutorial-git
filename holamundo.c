#include <stdio.h>

int main () {

    char nombre[100];
    printf("Escribe tu nombre:");
    /* leemos el teclado */
    scanf("%s", nombre);
    /* imprimimos en pantalla */
    printf("Bienvenido %s!\n",nombre);

    return 0;
}
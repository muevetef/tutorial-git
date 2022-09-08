
#include <stdio.h>

int main () {

    char nombre[10];
    int edad;
    printf("Escribe tu nombre: ");
    /* leemos el nombre de teclado */
    scanf("%s", nombre);
    /*leemos la edad */
    printf("Escribe tu edad: ");
    scanf("%d", &edad);

    if(edad > 17){
        /* imprimimos en pantalla */
        printf("Bienvenido %s, tienes %d años.\n", nombre, edad);
    }else if(edad == 17){
        printf("Te esperamos, casi tienes 18!!");
    }else{
        printf("Eres menor de edad, no tienes acceso!\n");
    }
    

    return 0;
}
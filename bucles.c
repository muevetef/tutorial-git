/* Programa que pide un numero al usuario
y si coincide con el numero secreto se le avisa 
y se termina el programa.
TODO:
- Pedir el numero secreto al grupier
- El numero debe ser menor 10 (luego añadimos que también sea > 0) 
  si no es así se le avisa y se le pide otro.
- Bonus1:El otro jugador tiene solo 5 intentos.
- Bonus2: dar pistas al jugador, si el numero es mayor o menor.
*/
#include <stdio.h>

int main()
{
    int numSecreto = 3;
    int num = 0;

    while (num != numSecreto)
    {
      printf("Escribe tu número: \n");
      scanf("%d", &num);
    }

    printf("Has acertado!\n");

    return 0;
}
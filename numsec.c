/* Programa que pide un numero al usuario
y si coincide con el numero secreto se le avisa 
y se termina el programa.
TODO:
x- Pedir el numero secreto al Crupier
x- El numero debe ser menor 10 (luego añadimos que también sea > 0) 
  si no es así se le avisa y se le pide otro.
- Bonus1:El otro jugador tiene solo 5 intentos.
- Bonus2: dar pistas al jugador, si el numero es mayor o menor.
*/
#include <stdio.h>
#define INTENTOS 5

int main()
{
    int numSecreto;
    int num = 0;
    int contador = INTENTOS;
    printf("Crupier-> Escribe el numero secreto [1-10]: ");
    scanf("%d", &numSecreto);
    
    while(numSecreto > 10 || numSecreto < 1)
    //while(!(numSecreto > 0 && numSecreto < 11))
    {
      printf("Crupier-> El numero de estar entre 1 y 10: ");
      scanf("%d", &numSecreto);
    }

    /* turno del jugador */
    do{
      printf("Jugador-> Tienes: %d intentos.\n", contador);
      printf("Jugador-> Escribe tu número: ");
      scanf("%d", &num);
      if(numSecreto < num){
        printf("Demasiado grande!\n");
      }else if(numSecreto > num){
        printf("Demasiado pequeño!\n");
      }else{
        break;
      }
      /* contador = contador -1;*/
      --contador;
    }while(contador > 0);

    if(contador > 0){
      printf("Enhorabuena campeón, erés un Uri Geller!!\n");
    }else{
      printf("Fin del Juego, no atinas ni a la de 5!\n");
    }
    
    return 0;
}
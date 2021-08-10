#include <stdio.h>

/*Aplicacion que calcula y presenta cuantas cifras tiene un determinado valor numerico
introducido por teclado */ 

int main()
{
    int number;
    int terminator;
    int sum=0;
    int remainder;

    // Bienvenida al usuario
    printf("Ingrese un numero entero positivo a continuacion para mostrar la suma de sus digitos\n");

    // Obtener la entrada del usuario
    scanf("%d", &number);
    terminator = number;

    while(terminator != 0) {
        remainder = terminator % 10;
        sum = sum + remainder;
        terminator = terminator / 10;
    }

    printf("Suma de los digitos = %d\n\n",sum);


    // Previene que la ventana de la consola se cierre 
    system("pause");

}

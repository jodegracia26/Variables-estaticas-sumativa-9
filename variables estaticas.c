#include <stdio.h>

//Programa que calcula y presenta cuantas cifras tiene un valor numerico

int main()
{
    //Inicializar variables
    int num, digitos=0;

    //Bienvenida al usuario
    printf("Ingrese un numero a continuacion para mostrar la cantidad de cifras que tiene: \n");
    scanf("%d", &num);

    //Calcular cantidad de cifras
    while(num != 0) {
        num=num/10;
        digitos++;
    }

    //Imprimir respuesta
    printf("Cantidad de cifras: %d\n",digitos);

    return 0;
}
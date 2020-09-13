#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include "validaciones.h"
int main(){
    int x;
    int y;
    char opcion;
    int continuar='1';
do{
    opcion= menu();
    x=ingreso();
    y=ingreso();
    system("cls");
    printf("X Vale: %d \n" ,x);
    printf("Y Vale: %d \n" ,y);
    switch(opcion){
        case'a':
        printf("La Suma es: %d\n", sumar(x,y));
        break;
        case'b':
        printf("La Resta es: %d\n", restar(x,y));
        break;
        case'c':
        printf("La Multiplicacion es :%d \n", multiplicar(x,y));
        break;
        case'd':
        x=operador(x);
        y=operador(y);
        printf("La division es: %f\n", dividir(x,y));
        break;
        case'e':
        printf("El factorial de X es :%d \n\n\n",factorial(x));
        printf("El factorial de y es :%d \n\n\n",factorial(y));
        break;
        case 'q':
            continuar=finalizar(opcion);
        break;
        default:
        printf("Opcion Incorrecta!. Intente Nuevamente\n");
        break;
    }system("pause");
}while (continuar=='1');
return 0;
}

#include <stdio.h>
#include <conio.h>
//Formula para el área: R = Pi * radio2.
int main(){
    //Declaramos las variables locales.
    float resultado, radio;

    printf("Cual es el radio?: ");
    scanf("%f",&radio);
    resultado=3.1416 * radio * radio;
    printf("\nLa %crea es: %.2f cm2",160,resultado);
    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1416

int area(){
    float radio, resultado;
    printf("RADIO: ");
    scanf("%f",&radio);
    resultado=PI * pow(radio,2);
    printf("\nEl area es: %.2f cm2",resultado);
    getch();
    return 0;
}

int main(){
    area();
    return 0;
}

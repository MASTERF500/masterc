#include <stdio.h>
#include <conio.h>
#define DOLARPESO 19.91
int main(){
    int dolares;
    float pesos;
    printf("\nCantidad de dolares: ");
    scanf("%d",&dolares);
    pesos=DOLARPESO*dolares;
    printf("\nTu dinero es: %.2f pesos MXN",pesos);
    getch();
}
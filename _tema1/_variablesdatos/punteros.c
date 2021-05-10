#include <stdio.h>

int main(){
    int a=5,b=4;
    printf("1. El valor de a=%d y el valor de b=%d",a,b);
    intercambio(&a,&b);
    printf("\n2. El valor de a=%d y el valor de b=%d",a,b);
    return 0;
}

void intercambio(int *x, int *y){
    int z;
    z=*y;
    *y=*x;
    *x=z;
}
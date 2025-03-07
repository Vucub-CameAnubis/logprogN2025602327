#include <stdio.h>

int main(){
    int x=2, y=2;

    double z=((double)1/2) + ((x+y)/3) + (2*((double)x/y));

    printf("El resultado es: %f",z);

    return 0;
}

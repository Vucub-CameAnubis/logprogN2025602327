#include <stdio.h>
#include <math.h>

int main(){

    int l=2;

    float pt= (5*l)+(l*sqrt((float)13/4))+(2*(l*sqrt(2)));

    printf("Perimetro Total: %.2f \n",pt);

    float a1=pow(l,2);//4
    float a2=((float)pow(l,2)/2);//4
    float a4=(((float)3/4)*pow(l,2));//3
    float a5=(((float)1/2)*pow(l,2));//2

    float at= a1+(2*a2)+a4+a5;

    printf("Area total: %.2f", at);
return 0;
}

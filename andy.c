#include <stdio.h>
#include <math.h>

int main(){
    //p=43.1956 a=83.9223
    int l=7;

    float pmd=(2*3.5*3.1416)/2;
    float lcc= ((float)1/5)*l;
    float lr= ((float)3/5)*l;
    float pt= (lcc*17)+(lr*2)+pmd;

    printf ("Perimetro total: %f", pt);

    float amd=((3.1416)*pow(((float)l/2),2))/2;
    float c1 = pow(l,2);
    float c2 = pow(((float)1/5*l),2);
    float r = (((float)3/5)*l)*(((float)1/5)*l);
    float at = amd +(c1)+(c2)+c2+r+r;

    printf("Area Total: %f", at);

return 0;
}

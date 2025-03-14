#include <stdio.h>
#include <math.h>

int main(){
    const int l=12, metroCua = 9256;
    const float iva=0.16;
    float aTriangulo,hTriangulo, hRomboide, aRomboide, aTotal, subTotal, Total;

    hTriangulo=sqrt(pow(l,2)-pow(((float)l/4),2));
    aTriangulo=(hTriangulo*((float)l/2))/2;

    printf("Este es la Altura del Triangulo:%.2f y el area del triangulo es: %.2f \n",hTriangulo, aTriangulo);

    hRomboide = hTriangulo/2;
    aRomboide = l*hRomboide;

    printf("Este es la Altura del romboide: %.2f y el area es: %.2f \n", hRomboide, aRomboide);

    aTotal=aRomboide + aTriangulo;

    printf("El area Total es: %.2f \n", aTotal);

    subTotal = aTotal*metroCua;

    printf("Este el subtotal:%.2f \n", subTotal);

    Total = subTotal-(subTotal*iva);

    printf("Este el Total: %.2f",  Total);

return 0;
}

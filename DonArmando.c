#include <stdio.h>
#include <math.h>

int main(){
    const float iva=0.16, isai=0.043;
    const int metro =11793;
    int l;
    float aRectangulo, aTriangulo1, aTriangulo2, aTotal, costoParcial, costoTotal;

    printf("Ingresa la medida del Lado: ");
    scanf("%d", &l);

    aRectangulo = l*((float)l/2);
    aTriangulo1 = (l*((float)l/4))/2;
    aTriangulo2 = (((float)l/4)*((float)l/2))/2;

    aTotal = (aRectangulo*2)+(aTriangulo1)+(aTriangulo2);

    printf("Area total: %.3f metros cuadrados \n",aTotal);

    costoParcial = aTotal*metro;

    printf("Costo Parcial: %.3f pesos\n", costoParcial);

    costoTotal = costoParcial+(costoParcial*iva)+(costoParcial*isai);

    printf("Costo Total: %.3f pesos", costoTotal);


return 0;
}

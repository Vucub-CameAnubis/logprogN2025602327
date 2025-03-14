#include <stdio.h>

int main (){

    const float cover = 500, desc = 0.25;

    float total;
    int numMuj, numHomb;

    printf("Escribe el numero de mujeres:");
    scanf ("%d", &numMuj);

    printf("escribe el numero de hombres:");
    scanf ("%d", &numHomb);

    total = numMuj*cover + numHomb*cover - numMuj*cover*desc;

    printf("Total: %f", total);

return 0;
}

#include <stdio.h>

int main(){

    /*En una fabrica de cucharas de plástico se contrata a personal de destajo (ISR 10%).
    Por cada paquete de 12 cucharas se les paga $0.50 al final de la semana.
    Elabore un algoritmo el cual indique:
    - el total a pagar de acuerdo a los paquetes entregados
    - los  descuentos pertinentes
    - el salario neto después de impuestos
    - el numero total de cucharas elaboradas.*/
    const int cucharas = 12;
    const float desc = 0.1, paga = 0.5;
    int cantPaq, cantCuchar;
    float salarioBruto, ISR, salarioNeto;

    printf("Ingresa la cantidad de Paquetes: ");
    scanf("%d",&cantPaq);

    salarioBruto=cantPaq*0.50;
    ISR=salarioBruto*0.10;
    salarioNeto = salarioBruto - ISR;
    cantCuchar=cantPaq * 12;

    printf("El salario Bruto es:%.2f \n", salarioBruto);
    printf("El ISR es: %.2f \n", ISR);
    printf("El salario Neto es: %.2f \n", salarioNeto);
    printf("La cantidad de cucharas es: %d \n", cantCuchar);



return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    float estatura, peso, imc, estatura2;

    printf("Ingresa tu estatura:");
    scanf("%f",&estatura);

    estatura2= pow(estatura,2);

    printf("Ingresa tu peso:");
    scanf("%f",&peso);

    imc = peso/(estatura2);

    if(imc <= 18.4){
        printf("Usted tiene bajo peso");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Usted tiene peso normal");
    }else if(imc >= 25.0 && imc <= 29.9){
        printf("Usted tiene sobrepeso");
    }else if(imc >= 30.0 && imc <= 34.9){
        printf("Usted tiene obesidad clase 1");
    }else if(imc >= 35.0 && imc <= 39.9){
        printf("Usted tiene obesidad clase 2");
    }else{
        printf("Usted tiene obesidad clase 3");
    }


return 0;
}

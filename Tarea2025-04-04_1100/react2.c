#include <stdio.h>

int main(){

    int opc;

    printf("¿Que va a querer? \n 1.Pizza Vegetariana \n 2.Pizza No Vegetariana \nEscoge una opcion:");
    scanf("%d",&opc);

    if(opc == 1){
        printf("Escoge un ingrediente \n 1.Pimiento \n2.Tofu \n Cual es tu eleccion:");
        scanf("%d",&opc);

        switch(opc){
            case 1:
                printf("Los ingredientes que escogio Mozzarella, Tomate y Pimiento.");
            break;
            case 2:
                printf("Los ingredientes que escogio Mozzarella, Tomate y Tofu.");
            break;
            default:
                printf("No existe este ingrediente");
            break;
        }

    }else if(opc == 2){
        printf("Escoge un ingrediente \n 1.Peperoni \n 2.Jamon \n 3.Salmon \nCual es tu eleccion:");
        scanf("%d",&opc);

        switch(opc){
            case 1:
                printf("Los ingredientes que escogio Mozzarella, Tomate y Peperoni.");
            break;
            case 2:
                printf("Los ingredientes que escogio Mozzarella, Tomate y Jamon.");
            break;
            case 3:
                printf("Los ingredientes que escogio Mozzarella, Tomate y Salmon.");
            break;
            default:
                printf("No existe este ingrediente");
            break;
        }
    }else{
        printf("Esa opcion no existe.");
    }

return 0;
}

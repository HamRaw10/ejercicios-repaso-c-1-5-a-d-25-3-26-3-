#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int sueldo1, sueldo2, sueldo3;
    int sueldo1comp, sueldo2comp, sueldo3comp;
    int sueldototal;

    printf("Ingrese el primer sueldo: %d", sueldo1);
    scanf("%d", &sueldo1);

    printf("\nIngrese el segundo sueldo: %d", sueldo2);
    scanf("%d", &sueldo2);

    printf("\nIngrese el segundo sueldo: %d", sueldo3);
    scanf("%d", &sueldo3);

    sueldo1comp = (sueldo1 * 0.10) + sueldo1;
    sueldo2comp = (sueldo2 * 0.10) + sueldo2;
    sueldo3comp = (sueldo3 * 0.10) + sueldo3;

    printf("\nSu primer sueldo completo es: %d", sueldo1comp);
    printf("\nSu segundo sueldo completo es: %d", sueldo2comp);
    printf("\nSu tercer sueldo completo es: %d", sueldo3comp);

    sueldototal = sueldo1comp + sueldo2comp + sueldo3comp;

    printf("\nSu sueldo total es: %d", sueldototal);


    return 0;
}

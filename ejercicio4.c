#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numero1, numero2;

    printf("Ingrese el primer valor: ");
    scanf("%i", &numero1);
    scanf("%i", &numero2);

    while (numero2 > numero1){
        if(numero2 % 2 == 0){
            printf("%i ", numero2);
        }
    numero2--;
    }
    printf("\n");
    return 0;
}

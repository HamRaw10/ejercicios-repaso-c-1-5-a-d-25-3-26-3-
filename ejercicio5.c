#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int km1, km2;
    int encuentro;

    printf("Ingrese el km en la carretera de la primer persona: %d", km1);
    scanf("%d", &km1);

    printf("Ingrese el km en la carretera de la segunda persona: %d", km2);
    scanf("%d", &km2);
    
    encuentro = (km1 + km2) / 2;

    printf("\nSu km de encuentro va a ser en el km: %d", encuentro);

    return 0;
}

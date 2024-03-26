#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int alumnos;
    int costo;
    int costoporalumno;

    printf("Ingrese la cantidad de alumnos que van a viajar: %d", alumnos);
    scanf("%d", &alumnos);


    if(alumnos >= 100){
        costoporalumno = 500;
    }else if(alumnos >= 50 && alumnos <= 99){
        costoporalumno = 400;
    }else if(alumnos <= 49 && alumnos >= 30){
        costoporalumno = 300;
    }else{
        costoporalumno = 0;
    }

    if(costoporalumno == 0){
        costo = 6000;
    }else{
        costo = costoporalumno * alumnos;
    }

    printf("\nEl costo del colectivo es: %d", costo);
    printf("\nEl costo por alumno es: %d", costoporalumno);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

void ejercicio_a(){
int main(int argc, char * argv[]){
    int A atoi(atof[1]);

    if(A > 0)(
        printf(" Es positivo");
    )
    else(
        printf(" Es negativo");
    );
 }
}

void ejercicio_b(){
int main(int argc, char * argv[]){
    int A;
    scanf("%i", &A);
    printf("Ingrese Su numero: %i", A);

    if(A % 2 == 0){
        printf("Es par")
    }
    else{
        printf("No es par")
    }
 }
}

ejercicio_c(){
int main(int argc, char * argv[]){
    int A;
    scanf("%i", &A);
    printf("Ingrese Su numero: %i", A);

    
    if(A % 3 == 0 && A % 2 == 0){
        printf(" Su numero es multiplo de 2 y 3");
    }
    else if(A % 3 == 0){
        printf(" Su numero es multiplo de 3");
    }
    else if(A % 2 == 0){
        printf(" Su numero es multiplo de 2");
    }
    else{
        printf(" Su numero no es multiplo ni de 2 ni de 3");
    }
    
return 0;
}
}

ejercicio_d(){
int main(int argc, char * argv[]){
    int A, B, C;
    scanf("%i %i %i", &A, &B, &C);
    printf("Ingrese SuS 3 numeros: %i %i %i", A, B, C);

    
   if(A > B && A > C){
        printf(" El primer numero es mayor");
   }
   else if(A > B && C > A){
    printf(" El tercer numero es mayor");
   }
   else if(B > A && B > C){
    printf(" El segundo numero es mayor");
   } 
   else{
    printf(" El tercer numero es mayor");
   }
return 0;
}
}

int main() {
    while(1) {
int opcion;
puts("Seleccione una opcion:\n");
puts("1. Determina los numeros, si son negativos o positivos");
puts("2. Determina el numero si es par o impar");
puts("3. Determina si el numero es multiplo de 3 o 2");
puts("4. Determina cual de los 3 numeros a ingresar es mayor");
puts("5. Salir");
puts("\nOpcion:\n");
scanf("%d", &opcion);

switch(opcion) {
case 1:
    opcion 1();
    break;
case 2:
    opcion 2();
    break;
case 3:
    opcion 3();
    break;
case 4:
    opcion 4();
    break;
case 5:
    system("clear");
    puts("saliendo del programa");
    return 0;
default:
   puts("Seleccione una opcion correcta");
   }
}
return 0;

//Ejercicio 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int A atoi(atof[1]);

    if(A > 0)(
        printf(" Es positivo");
    )
    else(
        printf(" Es negativo");
    );

return 0;
}

//Ejercicio 2
#include <stdio.h>
#include <stdlib.h>

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
return 0;
}

//Ejercicio 3
#include <stdio.h>
#include <stdlib.h>

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

#include <stdio.h>
#include <stdlib.h>

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

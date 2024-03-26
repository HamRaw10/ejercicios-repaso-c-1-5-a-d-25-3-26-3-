#include <stdio.h>
#include <stdlib.h>

int main(){
  int num1, num2, num3, num4, num5;
  int promediocalifexm;
  int notafinal;
  promediocalif = (num1 + num2 + num3) / 3;  

  printf("Ingrese la primer calificacion: %d", num1);  
  scanf("%d", &num1);
  
  printf("\nIngrese la segunda calificacion: %d", num2);
  scanf("%d", &num2);

  printf("\nIngrese la tercer calificacion: %d", num3);  
  scanf("%d", &num3);
  
  promediocalifexm = (num1 + num2 + num3) / 3;  
  printf("Su promedio es: %i", promediocalifexm);

  printf("\nIngrese la calificacion del examen final: %i", num4);
  scanf("%i", &num4);

  printf("\nIngrese la calificacion del trabajo final: %i", num5);
  scanf("%i", &num5);

    notafinal = (promediocalifexm * 0.55) + (num4 * 0.30) + (num5 * 0.15);

    printf("\nSu calificacion final en la materia es: %i", notafinal);


    return 0;

}

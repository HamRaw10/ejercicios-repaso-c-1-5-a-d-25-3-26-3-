#include <stdio.h>

// Prototipos de las funciones de los ejercicios
void ejercicio_a();
void ejercicio_b();
void ejercicio_c();
void ejercicio_d();

int main() {
    char opcion;

    // Solicitar al usuario que elija un ejercicio
    printf("Seleccione un ejercicio (Numero positivo o negativo(A), Saber si su numero es par o inpar(B), Saber si su numero es divisible por 2 o/y 3(C), Saber cual numero es mayor(D)): ");
    scanf(" %c", &opcion);

    // Evaluar la opción seleccionada por el usuario
    switch (opcion) {
        case 'A':
        case 'a':
            ejercicio_a(); // Llamar a la función del ejercicio A
            break;
        case 'B':
        case 'b':
            ejercicio_b(); // Llamar a la función del ejercicio B
            break;
        case 'C':
        case 'c':
            ejercicio_c(); // Llamar a la función del ejercicio C
            break;
        case 'D':
        case 'd':
            ejercicio_d(); // Llamar a la función del ejercicio D
            break;
        default:
            printf("Opción no válida.\n"); // Manejar una opción no válida
            break;
    }

    return 0;
}

// Definición de las funciones de los ejercicios

void ejercicio_a() {
    int A;
    printf("Ingrese un número para el ejercicio A: ");
    scanf("%d", &A);

    if (A > 0) {
        printf("El número ingresado es positivo.\n");
    } else if (A < 0) {
        printf("El número ingresado es negativo.\n");
    } else {
        printf("El número ingresado es cero.\n");
    }
}

void ejercicio_b() {
    int num;
    printf("Ingrese un número para el ejercicio B: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("El número ingresado es par.\n");
    } else {
        printf("El número ingresado es impar.\n");
    }
}

void ejercicio_c() {
    int num;
    printf("Ingrese un número para el ejercicio C: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 2 == 0) {
        printf("El número ingresado es divisible por 2 y por 3.\n");
    } else if (num % 3 == 0) {
        printf("El número ingresado es divisible solo por 3.\n");
    } else if (num % 2 == 0) {
        printf("El número ingresado es divisible solo por 2.\n");
    } else {
        printf("El número ingresado no es divisible ni por 2 ni por 3.\n");
    }
}

void ejercicio_d() {
    int num1, num2, num3;
    printf("Ingrese tres números para el ejercicio D: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("El primer número es el mayor.\n");
    } else if (num2 > num1 && num2 > num3) {
        printf("El segundo número es el mayor.\n");
    } else if (num3 > num1 && num3 > num2) {
        printf("El tercer número es el mayor.\n");
    } else {
        printf("Al menos dos números son iguales o todos son iguales.\n");
    }
}


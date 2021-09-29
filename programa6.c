//Escriba un programa que lea dos enteros, determine e imprima si el primero es múltiplo del segundo.
#include <stdio.h>
int main(){
    int num1,num2;
    printf("ingresa el numero: ");
    scanf("%d",&num1);
    printf("ingresa otro numero: ");
    scanf("%d",&num2);
    if (num2 % num1 == 0) {
        printf("El primer numero es multiplo del segundo");
    } else {
        printf("El primer numero no es multiplo del segundo");
    }
    return 0;
}
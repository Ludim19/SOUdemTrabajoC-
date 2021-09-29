//Escriba un programa que lea un entero, determine e imprima si es impar o par.
#include <stdio.h>

int main(){
    int num;
  printf("Ingresa un numero entero: \n");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("Es par");
  } else {
    printf("Es impar");
  }
  return 0;

}
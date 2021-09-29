//Escriba un programa que solicite su altura en centimetros y su nombre y despliegue la información
#include <stdio.h>
#include <stdlib.h>
float alturaresultante(int numero);
int main(){
    char nombre[51];
    int altura;
    float result;
    printf("Hola, por favor ingresa tu nombre: \n");
    scanf("%s",nombre);
    printf("Ahora ingresa tu altura en cm: \n");
    scanf("%d",&altura);
    result=alturaresultante(altura);
    printf("Hola %s su altura es %.2f metros",nombre,result);
}
float alturaresultante(int numero){
    int num=numero;
    float result=(float)num/100;
    return result;
}
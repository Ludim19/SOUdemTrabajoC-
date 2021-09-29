//Escriba un programa que lea un valor de punto flotante 
//e imprima en formato de notación cientifica del valor leido.
#include <stdio.h>
 #include <stdlib.h>

int main(void)
{
    float n1 = 8914560000;
    float n2 = 45236600000;
    double n3 = 12.6745;
    double n4 = 0.000031416;
    printf("Imprimir numeros flotantes en notacion cientifica-->");
    printf("\n");
    printf("numero 1 (%%f) - %f: \n", n1);
    printf("numero 1 (%%E) - %E: \n", n1);
    
    printf("======================================");
    printf("\n");
    printf("numero 2 (%%f) - %f: \n", n2);
    printf("numero 2 (%%E) - %E: \n", n2);
    
    printf("======================================");
    printf("\n");
    printf("numero 3 (%%f) - %f: \n", n3);
    printf("numero 3 (%%E) - %E: \n", n3);
    
    printf("======================================");
    printf("\n");
    printf("numero 4 (%%f) - %f: \n", n4);
    printf("numero 4 (%%E) - %E: \n", n4);

    return 0;
}
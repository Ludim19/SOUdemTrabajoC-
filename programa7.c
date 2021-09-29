//Separar numero entero
#include <stdio.h>
int main(){
    int numero;
    int i=0;
    int cifras[10];
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero);
    while (numero>0)
    {
        cifras[i]=numero%10;
        numero=numero/10;
        i++;
    }
    for (int h =i-1; h>=0; h--)
    {
        printf("%d\n",cifras[h]);
    }
    return 0;

}
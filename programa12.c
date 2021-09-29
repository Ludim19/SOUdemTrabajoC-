#include <stdio.h>
int main(){
    int i;
    printf("Factoriales del 1-5 \n");
    for ( i = 1; i <= 5; i++)
    {
        int factor=1;
        int numero=i;
        while (0<numero)
        {
            factor*=numero--;
        }
        printf("El factorial de %d es %d\n",i,factor);
    }
    

}
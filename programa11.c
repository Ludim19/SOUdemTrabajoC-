#include <stdio.h>
int main(){
    printf("Calculo del producto de enteros impares del 1-15 \n");
    int i,producto;
    producto=1;
    for ( i = 1; i <= 15; i++)
    {
        if (i%2!=0)
        {
            producto*=i;
        }
    }
    printf("El producto es: %d ",producto);

}
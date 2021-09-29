#include <stdio.h>
int main(){
    int nventas;
    printf("Bienvenido\n");
    printf("Ingrese el numerod de ventas: ");
    scanf("%d",&nventas);

    if (nventas>0 && nventas<=20000)
    {
       nventas=nventas*0.05;
    }
    else if (nventas>20001&&nventas<=50000)
    {
        nventas*=0.07;
        nventas+=1000;
    }
    else if (nventas>=50001)
    {
        nventas*=0.01;
        nventas+=3100;
    }
    printf("La comision para este numero de ventas es: %d ",nventas);
    return 0;


}
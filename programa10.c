#include <stdio.h>
int main(){
    int n1,n2,menor,i;
    n1=0;
    n2=0;
    menor=0;
    printf("Cuantos numeros desea comparar: ");
    scanf("%d",&n1);
    printf("\n");
    printf("Ingrese el primero numero: ");
    scanf("%d",&menor);
    
    for ( i = 2; i <= n1; i++)
    {
        printf("Ingrese otro numero: ");
        scanf("%d",&n2);
        if (n2<menor)
        {
            menor=n2;
        }
        
    }
    printf("\n");
    printf("El menor de los numeros ingresados es: %d",menor);


}
#include <stdio.h>
int main (){
    int a;
    printf("Ingrese el numero de renglones ");
    scanf("%d",&a);
    int num=a;
    int ant=0;
    int primero=1;
    int i=0;
    int aux=0;
    for ( i = 0; i <= num; i++)
    {
        while (aux<i)
        {
            if (ant==0)
            {
                printf("1");
                ant=1;
            }else{
                printf("0");
                ant=0;
            }
            aux++;
        }
        aux=0;
        printf("\n");
        if (primero==1)
        {
            ant=1;
            primero=0;

        }else{
            ant=0;
            primero=1;
        }
        
    }
    return 0;

}
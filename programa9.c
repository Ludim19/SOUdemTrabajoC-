#include <stdio.h>
int main(){
    int n,i;
     n=0;
     i=0;
    printf("Introduzca un valor N: ");
    scanf("%d",&n);
    printf("\n");
    printf("\nN\t10*N\t100*N\t1000*N\n\n");
    for ( i = 1; i <= n; i++)
    {
        printf("\n%d \t%d \t%d \t%d",i,(i*10),(i*100),(i*1000));
    }
    

}
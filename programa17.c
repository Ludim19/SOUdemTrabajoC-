#include <stdio.h>
int main(){
    int num;
    printf("Ingrese el numero final (iniciando desde 1): ");
    scanf("%d",&num);
    
    int mul=0;
    int j=1;
    int i=1;
    int lim=10;
    while (i<=10)
    {
        while(j<=num){
            mul=j*i;
            printf("%d x %d= %d, ",j,i,mul);
            j++;
        }
        j=1;
        i++;
        printf("\n");
    }
    return 0;



}
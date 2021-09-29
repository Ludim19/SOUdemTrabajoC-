#include <stdio.h>
int main(){
    int num,i,a=0,b=1,c;
    printf("Cuantos numeros quiere ver: ");
    scanf("%d",&num);
    printf("\n 0,1,");
    for ( i = 0; i < num-2; i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    return 0;
}
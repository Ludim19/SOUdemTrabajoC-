#include <stdio.h>
int exp(int n1,int n2);
int sumag(int n1,int n2);

int main(){
    int base;
    int exp;
    int sumago;
    printf("Ingrese el numero base: ");
    scanf("%d",&base);
    printf("\nIngrese el maximo de exponenciales: ");
    scanf("%d",&exp);
    sumago=sumag(base,exp);
    printf("\n Suma geometrica= %d ",sumago);
}
int exp(int n1,int n2){
    int exp=n1;
    if (n2==0)
    {
        exp=1;
        return exp;
    }else{
        for (int i = 0; i <= n2; i++)
        {
            exp=exp*n1;
        }
        
    }
    return exp;
}
int sumag(int n1,int n2){
    int sum=0;
    int expo;
    for (int i = 0; i <=n2; i++)
    {
        expo=exp(n1,i);
        sum=sum+exp;
    }
    
    return sum;

}
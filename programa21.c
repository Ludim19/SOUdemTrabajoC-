#include <stdio.h>
#include <stdio.h>
float sumserie(int,int);
int expo(int,int);
int fact(int);
int main(){
    int n;
    int nterm;
    float sumaserie;
    printf("Digite el numero de entradas: ");
    scanf("%d",&n);
    printf("\nNumero de terminos de la serie: ");
    scanf("%d",&nterm);
    sumaserie=sumserie(n,nterm);
    printf("\n Suma de la serie: %d ",sumaserie);
    return 0;

}
float sumserie(int n,int nterm){
    float sum=0;
    int sig=1;
    int exp=0;
    for (int i = 0; i < nterm; i++)
    {
        sum=sum+((float)(sig*expo(n,exp)))/((float)(fact(exp)));
        sig=(sig*(-1));
        exp+=2;
    }
    
    return sum;
}
int expo(int n,int n2){
    int exp=n;
    if (n2==0)
    {
        exp=1;
        return exp;
    }else{
        for (int i = 0; i <= n2; i++)
        {
            exp=exp*n;
        }
        
    }
    return exp;
}
int fact(int n){
    if (n==0)
    {
        return 1;
    }else{
        return (n*fact(n-1));
    }
    
    
}
#include <stdio.h>
int cmultiplo(int n1,int n2);
int main(){
 int n1;
 int n2;
 int mul;
 int aux;

    do
    {
        printf("Ingrese el primer numero: ");
        scanf("%d",&n1);
        printf("\n Ingrese el segundo numero: ");
        scanf("%d",&n2);
        mul=cmultiplo(n1,n2);
        if (mul==1)
        {
            printf("\n el %d es multiplo de %d\n",n2,n1);
        }else{
            printf("\n el %d no es multiplo de %d\n",n2,n1);
        }
        printf("¿Quiere ingresar mas numeros? (1 Si o 0 No)");
        scanf("%d",&aux);
    } while (aux==1);
    return 0;
}
int cmultiplo(int n1,int n2){
    if ((n2%n1)==0)
    {
        return 1;
    }else{
        return 0;
    }
    
}
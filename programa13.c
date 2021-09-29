#include <stdio.h>
int main(){
    int opc,num,i;
    printf("Introduzca 5 numeros del 1 al 30: \n");
    opc=1;
    while (opc<=5)
    {
        printf("\n--> ");
        scanf("%d",&num);
        if ((5<=num)&&(num<=30))
        {
           for (size_t i = 0; i < num; i++)
           {
               printf("*");
 
           }
           opc++;
           
        }
        
    }
    

}
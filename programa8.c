#include <stdio.h>
int main(){
    int ncuenta;
    ncuenta=0;
    float sinicial,cargos,creditos,limite,nsaldo;
    sinicial=0;
    cargos=0;
    creditos=0;
    limite=0;
    nsaldo=0;
    while (ncuenta!=-1)
    {
       printf("Introduzca el numero de cuenta (-1 para salir): ");
       scanf("%d",&ncuenta);
       if (ncuenta==-1)
       {
          printf("Buen dia");
          break;
       }
       
       
       printf("\n");
       printf("Introduzca el saldo inicial: ");
       scanf("%f",&sinicial);
       printf("\n");
       printf("Introduzca los cargos totales: ");
       scanf("%f",&cargos);
       printf("\n");
        printf("Introduzca los creditos totales: ");
        scanf("%f",&creditos);
        printf("\n");
        printf("Introduzca el limite de credito: ");
        scanf("%f",&limite);
        nsaldo=(sinicial+cargos)-creditos;
        if (nsaldo>limite)
        {
            printf("Su nuevo saldo es %.2f \n",nsaldo);
            printf("Cuenta: %d \n",ncuenta);
            printf("Limite de credito: %.2f \n",limite);
            printf("Salgo: %.2f \n",nsaldo);
            printf("Se ha excedido el limite de su credito\n");
        }else{
            printf("Su nuevo saldo es %.2f \n",nsaldo);
        }
        sinicial=0;
        cargos=0;
        creditos=0;
        limite=0;
        nsaldo=0;
        ncuenta=0;
    }
    
}
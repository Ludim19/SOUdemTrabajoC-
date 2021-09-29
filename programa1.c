#include <stdio.h>

int main(){
    char name[51];

    printf("Digite su nombre: ");
    scanf("%s",name);
    printf("\n");
    printf("\"%s,%s",name,"\"");
}
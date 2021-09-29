/*Escriba un programa que solicite la velocidad de descarga en megabits por segundo (Mbps) y 
el tamaño de un archivo en Megabytes (MB). El programa deberá calcular el tiempo de descarga del archivo. 
Dentro de este contexto, 1 byte = 8 bits. Use el tipo float, y use / para la división. 
El programa deberá mostrar todos los tres valores (velocidad de descarga, tamaño del archivo, 
y tiempo de descarga) mostrando dos digitos a la derecha del punto decimal, 
tal y como se muestra a continuación:
*/
#include <stdio.h>
float tiempo(float velocidad, float peso);
int main(){
    float velocidad;
    float peso;
    printf("Ingrese la velocidad de su internet: \n");
    scanf("%f",&velocidad);
    printf("Ingrese el peso de su archivo: \n");
    scanf("%f",&peso);
    printf("A %.2f Mbps, un archivo de %.2f MB se descarga en %.2f segundos",velocidad,peso,tiempo(velocidad,peso));
}
float tiempo(float velocidad, float peso){
    float tiempo;
    float peson=(float)((peso*1000000)*8000000)/1000000;
    tiempo=(float)peson/(velocidad*1000000);
    return tiempo;
}
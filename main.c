#include <stdio.h>
#include "funciones.h"
int main (int argc, char *argv[]) {

    float x1,y1,x2,y2,x3,y3;
    float a, b, c;
    float perimetro1, area1;
    x1=leerComponente('X',1);
    y1=leerComponente('Y',1);
    x2=leerComponente('X',2);
    y2=leerComponente('Y',2);
    x3=leerComponente('X',3);
    y3=leerComponente('Y',3);
    a=distancia(x1,y1,x2,y2);
    b=distancia(x2,y2,x3,y3);
    c=distancia(x3,y3,x1,y1);
    perimetro1 = perimetro(a,b,c);
    area1 = area(perimetro1,a,b,c);
    printf("El perimetro es: %.2f\n",perimetro1);
    printf("El area es: %.2f\n",area1);

    return 0;
}
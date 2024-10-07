#include <stdio.h>
#include "funciones.h"
#include <math.h>

float leerComponente(char comp, int num){
    float m;
    printf("Ingrese componente %c del punto %d: ",comp,num);
    scanf("%f",&m);
    return m;
}


float perimetro(float a, float b, float c){
    float p;
    p=a+b+c;
    return p;
}

float area(float p, float a, float b, float c){
    float s = p/2;
    float area1 = sqrt(s*(s-a)*(s-b)*(s-c));
    return area1;
}

float distancia(float x1, float y1, float x2, float y2){
    float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}
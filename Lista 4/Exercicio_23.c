//Escreva um programa que leia dois valores inteiros de coordenadas X e Y. O programa deve determinar
//a qual dos quatro quadrantes do plano cartesiano pertencem tais coordenadas.

#include<stdio.h>

int main(){
    int x, y;

    printf("Informe a coordenada de X: \n");
    scanf("%d", &x);
    printf("Informe a coordenada de Y: \n");
    scanf("%d", &y);

    if(x > 0 && y > 0)
        printf("As coordenadas informadas pertencem ao primeiro quadrante");
    else if(x <= 0 && y > 0)
        printf("As coordenadas informadas pertencem ao segundo quadrante");
    else if(x <= 0 && y <= 0)
        printf("As coordenadas informadas pertencem ao terceiro quadrante");
    else if(x > 0 && y <= 0)
        printf("As coordenadas informadas pertencem ao quarto quadrante");

    return 0;
}
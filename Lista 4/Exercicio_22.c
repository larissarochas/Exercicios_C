//Escreva um programa que leia três valores inteiros e imprima o menor entre eles (assuma valores diferentes)

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Informe tres valores inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) 
        printf("O maior valor eh: %d", a);
    else if (b > a && b > c) 
        printf("O maior valor eh: %d", b);
    else 
        printf("O maior valor eh: %d", c);

    return 0;
}

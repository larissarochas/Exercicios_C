//Escreva um programa que verifique se um triângulo é equilátero, isósceles ou escaleno a partir da
//informação dos tamanhos de seus três lados.

#include<stdio.h>

int main(){
    int x,y,z;

    printf("Informe o valor de X: \n");
    scanf("%d", &x);
    printf("Informe o valor de Y: \n");
    scanf("%d", &y);
    printf("Informe o valor de Z: \n");
    scanf("%d", &z);

    if(x+y==z && x+z==y && y+z==x)
        printf("Os valores informados formam um Triangulo Equilatero");
    else if(x+y==z && x+z==y && y+z!=x)
        printf("Os valores informados formam um Triangulo Isoceles");
    else if(x+y!=z && x+z!=y && y+z!=x)
        printf("Os valores informados formam um Triangulo Escaleno");

    return 0;
}
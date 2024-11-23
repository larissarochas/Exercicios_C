//Dados três valores X, Y, Z, verifique se eles podem ser os comprimentos dos lados de um triângulo.

#include<stdio.h>

int main(){
    float x, y, z;

    printf("Informe o valor de X: \n");
    scanf("%f", &x);
    printf("Informe o valor de Y: \n");
    scanf("%f", &y);
    printf("Informe o valor de Z: \n");
    scanf("%f", &z);

    if ((x<y+z)||(y<x+z)||(z<x+y) )
        printf("As medidas informadas formam um triangulo");
    else
        printf("As medidas informadas não formam um triangulo");
    
    return 0;
}

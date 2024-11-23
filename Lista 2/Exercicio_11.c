//Escreva um programa em C que leia dois ângulos de um triângulo e dê como saída o terceiro ângulo ausente.

#include<stdio.h>>

int main(){
    float ang1, ang2, angulo;

    printf("Informe o primeiro angulo: \n");
    scanf("%f", &ang1);
    printf("Informe o segundo angulo: \n");
    scanf("%f", &ang2);

    angulo = 180 - (ang1+ang2);
    
    printf("O terceiro angulo eh %.2f", angulo);

    return 0;
}

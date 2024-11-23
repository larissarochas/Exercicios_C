//Escreva um algoritmo que calcule a área de um triângulo retângulo cujos dados de base a altura
//foram fornecidos pelo usuário.

#include<stdio.h>

int main(){
    float base, altura, area;

    printf("Descobrindo a Area do Triangulo Retangulo \n");
    printf("Informe a altura: \n");
    scanf("%f", &altura);
    printf("Informe a base: \n");
    scanf("%f", &base);

    area = (base*altura) / 2;
    
    printf("A area do triangulo retangulo e: %.2f", area);
    return 0;
}

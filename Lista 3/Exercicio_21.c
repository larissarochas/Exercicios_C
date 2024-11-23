//Escreva um programa que leia do teclado a capacidade total de um reservatório de água e a capacidade atual e emita ao final 
//um alerta caso a capacidade esteja abaixo de 25% do total.

#include<stdio.h>

int main(){
    float capTotal, capAtual, alerta, total;
    alerta = 0.25;

    printf("RESERVATORIO \n");
    printf("Informe a capacidade total: \n");
    scanf("%f", &capTotal);
    printf("Informe a capacidade atual: \n");
    scanf("%f", &capAtual);

    total = capTotal*alerta;

    if (capAtual <= total)
        printf("ATENCAO A CAPACIDADE DO RESERVATORIO ESTA ABAIXO DO LIMITE DE 25%");
    else
        printf("A capacidade esta acima do limite.");

    return 0;
}
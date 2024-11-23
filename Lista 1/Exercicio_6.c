//screva um algoritmo que calcule quanto uma pessoa gasta por ano com a assinatura de Netfix e Spotify juntas. 
//Você pode fazê-lo com valores constantes ou pedindo ao usuário que informe os valores da mensalidade, fica a seu critério.

#include<stdio.h>

int main() {
    float netflix, spotify, total;

    printf("Informe o valor da Netflix: \n");
    scanf("%f", &netflix);

    printf("Informe o valor do Spotify: \n");
    scanf("%f", &spotify);

    total = netflix+spotify;

    printf("Seu gasto mensal é de R$ %.2f", total);

    return 0;
}
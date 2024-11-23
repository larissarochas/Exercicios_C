//Escreva um programa em C que leia uma temperatura em Celsius e a converta para Fahrenheit.
//Procure na internet a fórmula para esta convers~ao.

#include<stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("CONVERTENDO TEMPERATURA \n");
    printf("Informe a temperatura em Celsius: \n");
    scanf("%f", &celsius);

    fahrenheit = (9*celsius+160)/5;
    
    printf("A temperatura em Fahrenheit eh %.2f F", fahrenheit);

    return 0;
}

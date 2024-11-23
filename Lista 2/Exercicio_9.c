//Escreva um programa em C que leia uma temperatura em Celsius e a converta para Kelvin. Procure
//na internet a fórmula para esta conversão.

#include<stdio.h>

int main(){
    float celsius, kelvin;

    printf("CONVERTENDO TEMPERATURA \n");
    printf("Informe a temperatura em Celsius: \n");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    
    printf("A temperatura em Kelvin eh %.2f", kelvin);

    return 0;
}

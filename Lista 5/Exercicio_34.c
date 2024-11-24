//Escreva um programa que exiba a soma dos N termos da série:
//1 - 1/3 + 1/9 - 1/27 + 1/81 ... 1/n

#include<stdio.h>

int main(){
    float R = 1, i = 0, n = 1, d = 1;
    int N, sinal = 1;

    printf("Informe um numero: \n");
    scanf("%d", &N);

    while(i <= N){
        R = R + ((n / d)*sinal);
        d = d * 3;
        i++;
        sinal = sinal * -1;
    }

    printf("%f", R);

    return 0;
}
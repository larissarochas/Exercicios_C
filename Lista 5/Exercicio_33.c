//Escreva um programa que exiba a soma dos N termos da série:
//1 + 1/2 + 1/4 + 1/8 + 1/16 + ... + 1/n

#include<stdio.h>

int main(){
    float R = 0, i = 0, n = 1, d = 1;
    int N;

    printf("Informe um numero: \n");
    scanf("%d", &N);

    while(i <= N){
        R = R + (n / d);
        d = d*2;
        i++;
    }

    printf("%f", R);

    return 0;
}
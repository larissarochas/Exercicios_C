//Escreva um programa que exiba a soma dos N termos da série:
//1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n

#include<stdio.h>

int main(){
    float R = 0, n = 1, d = 1;
    int N;

    printf("Informe um numero: \n");
    scanf("%d", &N);

    while(d <= N){
        R = R + (n / d);
        d++;
    }
    printf("%f", R);

    return 0;
}
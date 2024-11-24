//Escreva um programa que exiba o fatorial de um número natural N positivo informado pelo teclado.

#include<stdio.h>

int main(){
    int n, f = 1, i = 1;

    printf("Informe um numero natural: \n");
    scanf("%d", &n);

    while(i <= n){
        f = f * i;
        i++;
    }

    printf("%d! =  %d \n", n, f);

    return 0;
}
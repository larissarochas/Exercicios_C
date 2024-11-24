//Faça um programa que, dado um inteiro n, calcule a soma dos n termos da seguinte série:
//                 1/2 + 3/4 + 5/8 + 7/16 + 9/32 + 11/64 + ...

#include<stdio.h>

int main() {
    int n, i = 1, num = 1, denominador = 2;
    double soma = 0.0;

    printf("Informe um numero inteiro positivo (n) \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser inteiro positivo. \n");
        return 1;
    }

    while (i <=n) {
        soma += (double)num / denominador;
        num += 2;
        denominador *= 2;
        i++;
    }

    printf("A soma dos %d primeiros termos da serie eh: %.6lf\n", n, soma);

    return 0;
}
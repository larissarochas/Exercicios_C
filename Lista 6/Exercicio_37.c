//Na matemática, o número harmônico, designado por H(n), define-se como sendo a soma da série harmônica:
//                  H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
//Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n). 

#include<stdio.h>

int main() {
    int n, i = 1;
    double h = 0.0;

    printf("Informe um numero inteiro positivo: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        return 1;
    }

    while (i <= n) {
        h += 1.0 / i;
        i++;
    }

    printf("O valor de H(%d) eh: %.6lf\n", n, h);

    return 0;
}
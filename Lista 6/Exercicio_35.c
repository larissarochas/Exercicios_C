//Escreva um programa que, dado um número inteiro positivo n, calcule a soma dos n primeiros números primos.

#include<stdio.h>

int main() {
    int n, cont = 0, num = 2, soma = 0;

    printf("Informe a quantidade de numeros primos (n): \n");
    scanf("%d", &n);

    while (cont < n) {
        int d = 0, i = 1;

        while (i <= num) {
            if (num % i == 0)
                d++;
            i++;
        }

        if (d == 2) {
            soma += num;
            cont++;
        }

        num++;
    }

    printf("A soma dos %d primeiros numeros primos eh: %d\n", n, soma);

    return 0;
}
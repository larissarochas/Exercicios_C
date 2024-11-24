//Um número triangular é um número natural que pode ser representado na forma de um triângulo equilátero. 
//Por exemplo, os números 1, 3 e 6 são triangulares, como pode ser observado pela figura:
//Os primeiros números triangulares são: 1, 3, 6, 10, 15, 21, 28, 36, 45, 55...
//Escreva um programa que lê um número n e imprima a soma dos n primeiros números triangulares.

#include <stdio.h>

int main() {
    int n, i, num = 0, soma = 0;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num += i; 
        soma += num; 
    }

    printf("A soma dos %d primeiros numeros triangulares e: %d\n", n, soma);

    return 0;
}
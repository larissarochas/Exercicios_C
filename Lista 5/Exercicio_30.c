//Escreva um programa que exiba a soma dos N primeiros números naturais ímpares, com N informado pelo usuário.

#include<stdio.h>

int main() {
    int n, soma = 0, contador = 0, numero = 1;

    printf("Informe um numero (N): \n");
    scanf("%d", &n);

    while (contador < n) {
        soma += numero; 
        numero += 2;    
        contador++;     
    }

    printf("A soma dos %d primeiros numeros naturais impares eh: %d\n", n, soma);

    return 0;
}
//Crie um programa em C para ler um vetor de 20 posições e ao final informe:
//  a. O maior valor no vetor e a sua posição;
//  b. O menor valor e a sua posição.

#include <stdio.h>

int main() {
    int vetor[20];
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < 20; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("\nO maior valor é %d e esta na posicao %d.\n", maior, posMaior);
    printf("O menor valor é %d e esta na posicao %d.\n", menor, posMenor);

    return 0;
}
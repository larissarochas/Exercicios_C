//Crie um programa em C para ler um vetor de 20 posições e ao final mostre:
//  a. Todos os valores múltiplos de 2 e a posição que eles se encontram no vetor;
//  b. Todos os valores múltiplos de 5 e a posição que eles se encontram no vetor.

#include <stdio.h>

int main() {
    int vetor[20];
    
    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores mUltiplos de 2 e suas posiçOes:\n");
    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 2 == 0) 
            printf("Valor: %d, Posicao: %d\n", vetor[i], i);
    }

    printf("\nValores multiplos de 5 e suas posicoes:\n");
    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 5 == 0) 
            printf("Valor: %d, Posicao: %d\n", vetor[i], i);
    }

    return 0;
}

//Crie um programa em C que preencha um vetor de 10 posições e imprima o seu conteúdo no sentido inverso ao preenchido.

#include <stdio.h>

int main() {
    int vetor[10]; 
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nConteudo do vetor no sentido inverso:\n");
    for (i = 9; i >= 0; i--) 
        printf("%d ", vetor[i]);

    return 0;
}
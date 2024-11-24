//Crie um programa em C que leia dois vetores de 10 posições preenchidas com inteiros. 
//Crie um terceiro vetor onde cada posição receberá a soma das posições correspondentes dos dois primeiros.

#include <stdio.h>

int main() {
    int i;
    int v1[10], v2[10], soma[10]; 

    printf("Digite os elementos do primeiro vetor (10 inteiros):\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("\nDigite os elementos do segundo vetor (10 inteiros):\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < 10; i++) 
        soma[i] = v1[i] + v2[i]; 

    printf("\nVetor soma (elemento por elemento):\n");
    for (i = 0; i < 10; i++) 
        printf("Elemento %d: %d\n", i + 1, soma[i]);

    return 0;
}
//Faça um programa que leia o número de termos n, o primeiro termo a 1 e a razão r de uma P.A. (progressão aritmética). 
//Esse programa deve imprimir todos os termos da P.A., do primeiro termo a1 ao n-ésimo termo an, e a soma desses n termos. 
//Por exemplo, considere o número de termos igual a 10, o primeiro termo a1 = 1 e a razão r = 2. A saída do programa deve 
//ser conforme a seguir:
//Termos: 1 3 5 7 9 11 13 15 17 19
//Soma: 100

#include <stdio.h>

int main() {
    int n, a1, r, soma = 0;

    printf("Informe o numero de termos (n): ");
    scanf("%d", &n);
    printf("Informe o primeiro termo (a1): ");
    scanf("%d", &a1);
    printf("Informe a razao (r): ");
    scanf("%d", &r);

    printf("Termos: ");

    for (int i = 0; i < n; i++) {
        int termo = a1 + i * r; 
        printf("%d ", termo);
        soma += termo; 
    }

    printf("\nSoma: %d\n", soma);

    return 0;
}
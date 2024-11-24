//Escreva um programa que calcule A elevado a N com ambos os dados informados pelo usuário.

#include<stdio.h>

int main(){
    int base, exp, i = 1, r = 1;

    printf("Informe o valor da base e do expoente: \n");
    scanf("%d %d", &base, &exp);

    while(i <= exp){
        r = r * base;
        i++;
    }

    printf("Resultado = %d", r);

    return 0;
}

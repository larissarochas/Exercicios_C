//Escreva um programa que realize a multiplicação de dois números sem usar o operador “*”.

#include<stdio.h>

int main(){
    float a, b, i = 1, t = 0;

    printf("Informe dois numeros: \n");
    scanf("%f %f", &a, &b);

    while(i <= b){
        t = t + a;
        i++;
    }

    printf("%1.f X %1.f = %1.f", a, b, t);

    return 0;
}

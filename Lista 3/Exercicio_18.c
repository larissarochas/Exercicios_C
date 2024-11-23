//Elabore um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. 
//Cada data deve ser composta de três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o ano.

#include<stdio.h>

int main(){
    int d1, m1, a1, d2, m2, a2;

    printf("INFORME A PRIMEIRA DATA \n");
    printf("Dia: ");
    scanf("%d", &d1);
    printf("Mes: ");
    scanf("%d", &m1);
    printf("Ano: ");
    scanf("%d", &a1);
    printf("\n");

    printf("INFORME A SEGUNDA DATA \n");
    printf("Dia: ");
    scanf("%d", &d2);
    printf("Mes: ");
    scanf("%d", &m2);
    printf("Ano: ");
    scanf("%d", &a2);
    printf("\n");

    if (a1>a2 && m1>m2 && d1>d2)
        printf("A primeira data eh maior que a segunda");
    else
        printf("A segunda data eh maior que a primeira");
    
    return 0;
}
//Escreva um programa em C que recebe um total de horas, minutos e segundos passados e converta tudo para segundos.

#include<stdio.h>

int main(){
    int horas, min, segH, segM;

    printf("CONVERTENDO TEMPO EM SEGUNDOS \n");
    printf("Informe o total de horas: \n");
    scanf("%d", &horas);
    printf("Informe os minutos: \n");
    scanf("%d", &min);

    segH = horas*3600;
    segM = min*60;
    
    printf("A conversao de horas foi %d s \n", segH);
    printf("A conversao de minutos foi %d s", segM);

    return 0;
}

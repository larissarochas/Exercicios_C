//Suponha que um determinado aplicativo de transporte cobre 1.35 Reais por cada KM percorrido.
//Escreva um algoritmo em que se possa fornecer a distância da viagem para que o algoritmo lhe
//informe o valor a ser pago no final.

#include<stdio.h>

int main(){
    float valorKm, total, distancia;
    valorKm = 1.35;

    printf("Informe a distancia: \n");
    scanf("%f", &distancia);
    
    total = valorKm*distancia;
    
    printf("O valor total da corrida e R$ %.2f", total);
    return 0;
}

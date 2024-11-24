//Uma empresa concederá um aumento de salário aos seus funcionários de acordo com a tabela abaixo.
//Escreva um programa que lê o salário e o cargo de um funcionário (identificado pelo código) e calcula
//o seu novo salário. Se o cargo do funcionário não estiver na tabela, utilize um percentual de 5% de
//aumento. Seu programa deve imprimir o salário antigo, o novo salário e a diferença.
//Código  Cargo     Percentual
//101    Gerente      10%
//102    Técnico      20%
//103    Engenheiro   30%

#include<stdio.h>

int main(){
    float aumento, salario, salarioFinal;
    int funcao;

    printf("Informe a funcao: 101 Gerente, 102 Tecnico, 103 Engenheiro, 104 Outra \n");
    scanf("%d", &funcao);
    printf("Informe o salario: \n");
    scanf("%f", &salario);

    if(funcao == 101){
        aumento=salario*0.1;
        salarioFinal=salario+aumento;
        
        printf("O salario atual sera R$ %.2f", salarioFinal);
    } else{
        if(funcao == 102){
        aumento=salario*0.2;
        salarioFinal=salario+aumento;
        
        printf("O salario atual sera R$ %.2f", salarioFinal);
        } else{
            if(funcao == 103){
                aumento=salario*0.3;
                salarioFinal=salario+aumento;
                
                printf("O salario atual sera R$ %.2f", salarioFinal);
            } else{
                if(funcao == 104){
                    aumento=salario*0.05;
                    salarioFinal=salario+aumento;
                    printf("O salario atual sera R$ %.2f", salarioFinal);
                }else{
                    printf("FUNCAO NAO ENCONTRADA");
                }
            }
        }
    }

    return 0;
}
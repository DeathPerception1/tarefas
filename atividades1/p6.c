// Autor: Lucas Frade Ferreira Moscardo


#include <stdio.h>

int main(){

    // Escreva um programa que leia o valor da hora aula, o número de horas de aula dadas
    // no mês e o percentual de desconto do INSS e imprima o salário líquido de um professor.

    double hora_valor, horas_mes, desconto_inss;

    scanf("%lf", &hora_valor);
    scanf("%lf", &horas_mes);
    scanf("%lf", &desconto_inss);
    printf("%lf", (hora_valor * horas_mes) - (hora_valor * horas_mes) * desconto_inss/100);
    return 0;

}
#include <stdio.h>
int main(){

    //Escreva um programa que leia a quantidade de fitas que uma locadora de v´ıdeo possui
    // e o valor que ela cobra por cada aluguel, e mostre as informa¸c˜oes pedidas a seguir:
    // – Sabendo que um ter¸co das fitas s˜ao alugadas por mˆes, exiba o faturamento da
    // locadora;
    // – Quando o cliente atrasa a entrega, ´e cobrada uma multa de 10% sobre o valor do
    // aluguel. Sabendo que um d´ecimo das fitas alugadas no mˆes s˜ao devolvidas com
    // atraso, calcule o valor ganho com multas por mˆes;
    // – Sabendo ainda que 2% das fitas se estragam ao longo do ano, e um d´ecimo desse
    // total ´e comprado para reposi¸c˜ao, exiba a quantidade de fitas que a locadora ter´a no
    // final do ano.


    // versão convertendo de int para double
    // int dl;
    // double valor_aluguel, qtd_fitas, lucro_bruto;
    // scanf("%d", &dl);
    // scanf("%lf", &valor_aluguel);

    // qtd_fitas = (double)dl;
    // lucro_bruto = qtd_fitas * valor_aluguel;

    // printf("%.6lf\n", qtd_fitas/3.0 * valor_aluguel); // certo
    // printf("%.6lf\n", (valor_aluguel * 0.1) * ((qtd_fitas/3)/10)); // certo3
    // printf("%.lf", (qtd_fitas - (qtd_fitas*0.02) + (qtd_fitas*0.02)/10)); // certo2
    // return 0;

    // versão com tudo double
    double valor_aluguel, qtd_fitas;
    scanf("%lf", &qtd_fitas);
    scanf("%lf", &valor_aluguel);

    printf("%.6lf\n", qtd_fitas/3.0 * valor_aluguel); // certo
    printf("%.6lf\n", (valor_aluguel * 0.1) * ((qtd_fitas/3)/10)); // certo3
    printf("%.lf", (qtd_fitas - (qtd_fitas*0.02) + (qtd_fitas*0.02)/10)); // certo2
    return 0;
    
}

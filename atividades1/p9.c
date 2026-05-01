// Autor: Lucas Frade Ferreira Moscardo


#include <stdio.h>

int main(){

    // Escreva um programa que leia um número inteiro de 3 dígitos que representa o nu´mero
    // de uma conta corrente e imprima seu o dígito verificador, o qual é calculado da seguinte
    // forma:
    // – Número: 235
    // – Somar o número da conta com seu inverso: 235 + 532 = 767
    // – Multiplicar cada dígito pela sua ordem posicional e somar esses resultados: 7*1 +
    // 6*2 + 7* 3 = 40
    // – O último dígito desse resultado é o dígito verificador da conta: 0
    // Comentando por cima como fazer:
    // primeiro passo:
    // segundo passo: basta usar um loop de interação, em i, e múltiplicar por cada iteração por i
    // claro, eu teria que tornar o número em um vetor, o que não é um problema


    int a, unidade, dezena, centena, inverso, ordem_posicional, alguma_coisa_unidade, alguma_coisa_dezena, alguma_coisa_centena, soma_a_inverso, id;
    scanf("%d", &a);
    unidade = a % 10;
    // printf("unidade: %d\n", unidade);
    // peguei do exercício 4
    dezena = (a/10) % 10;
    // printf("dezena: %d\n", dezena);
    centena = a/ 100;
    // printf("centena: %d\n", centena);
    inverso = unidade * 100 + dezena * 10 + centena;
    // printf("INVERSO: %d", inverso);

    soma_a_inverso = a + inverso;
    alguma_coisa_unidade = soma_a_inverso % 10;
    alguma_coisa_dezena = (soma_a_inverso/10) % 10;
    alguma_coisa_centena = soma_a_inverso/100;

    id = (alguma_coisa_centena * 1 + alguma_coisa_dezena*2 + alguma_coisa_unidade*3);

    printf("\n%d",id%10); 
    return 0;

}
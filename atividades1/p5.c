#include <stdio.h>
int main(){

    // Escreva um programa que leia o preço à prazo de um produto e imprima o seu preço à
    // vista, que tem um desconto de 9%.
    double preco;
    scanf("%lf", &preco);
    printf("%lf", preco-(preco * 0.09));
    return 0;
}
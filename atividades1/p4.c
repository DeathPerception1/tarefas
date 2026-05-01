// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

int main(){
    
    // Escreva um programa que leia um nu´mero inteiro de 3 d´ıgitos e mostre o algarismo da
    //casa das dezenas.
    // Versão para forçar o usuário a colocar um número de três algarismos
    // int a=0;
    // while (a < 100){
        // scanf("%d", &a);
    // }
    int a;
    scanf("%d", &a);
    // Explicando a lógica:
    // Imagine que o número dado foi 241. Primeiro o cálculo "elimina" a unidade (1), deixando
    // 24 e, então, ele pega a parte da dezena pegando o restante da divisão.
    printf("%d", (a/10) % 10);
    return 0;
}
#include <stdio.h>

int main(){

    //  Escreva um programa que leia dois nu´meros inteiros referentes a hora atual (ou seja,
    // hora com os minutos, como por exemplo 13 horas e 30 minutos) e imprima quantos
    // minutos se passaram desde o in´ıcio do dia.

    int h, m;


    
    scanf("%d", &h);
    scanf("%d", &m);
    printf("%d", h*60+m);
    return 0;
}
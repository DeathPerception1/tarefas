// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

// Um número natural é triangular se ele é produto de três números naturais consecutivos
// (por exemplo, 120 é triangular, pois 4 × 5 × 6 = 120. Escreva um programa que leia
// um número inteiro e imprima “sim” caso esse número seja triangular ou “nao” caso
// contrário.

char *triangular(int a){
    // oba esse aqui tem uma fórmula
    // Tn = i * (i+1) * (i+2);
    int i;
    for(i=1; i <= a;i++){
        if((i * (i+1) * (i+2)) == a) return "sim";
        if ((i * (i+1) * (i+2)) > a) break;
    }
    return "nao";
}

int main(){
    int b;
    int c = 3;
    scanf("%d", &b);
    printf("%s", triangular(b));
    return 0;
}
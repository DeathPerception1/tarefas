#include <stdio.h>
#include <math.h>

int main(){

    // Escreva um programa que leia dois nu´meros reais referentes a altura (h) e o raio (r) de
    // uma lata de ´oleo e imprima o seu volume (V = 3.14 · h · r2).

    double h, r;
    scanf("%lf", &h);
    scanf("%lf", &r);
    printf("%lf", 3.14 * h * pow(r, 2.0));
}
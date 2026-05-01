// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, i, m;
    scanf("%d %d", &a, &b);
    // printf("\%d %d", a, b);
    // Vou usar uma PG pra calcular a tabuada de qualquer número
    // a tabuada de qualquer número pode ser determinada pela seguinte lei:
    // an = a_1 + (n-1).r porra mas tb tem multiplicação nessa buceta
    // onde= a_1 é o número da tabuada

    //       razão é o próprio número (no caso, a)
    //       n é quantas vezes ele repete (no caso, b)
    // então ficaria tipo assim
    // m (resultado_final) = i + ()


    m = 0;
    if(a && b == 0){
        m = m; // :D
    } else if( a && b > 0){ // ambos maiores que zero 
        for (i=0; i<b; i++){
        m += a;
        // printf("%d", m);
        }
        // printf("Placeholder\n"); // dando certo :)

    } else if (a && b < 0){ // ambos menores do que zero 
        for (i=0; i>b; i--){
        m -= a;
        // printf("%d", m);
        }
        // printf("Placeholder1\n"); // dando certo :)

    } else if (a > 0 && b < 0){
        for(i=0; i > b; i--){
            m += a;
        }
        // printf("Placeholder2\n"); // dando certo :)
    } else if (a < 0 && b > 0)
    {
        for(i = 0; i < b; i++){
            m -= a;
        }
        // printf("Placeholder3\n"); // dando certo :)
    }

    printf("%d", m);
    return 0;
}
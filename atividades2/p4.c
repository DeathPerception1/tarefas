// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>
#include <math.h>

char *perfeito(int a){
    // formula: 2^{n-1}*(2^n - 1)
    int i;
    for(i = 0; i < a; i++ ){
        if (a % i == 0 && pow(2, i-1)*(pow(2, i)-1) == a){
            return "sim";
        }
    }
    return "nao";
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%s", perfeito(a));

    return 0;
}
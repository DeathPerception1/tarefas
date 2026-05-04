// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>
#include <math.h>

char *perfeito(int a){
    // formula: 2^{n-1}*(2^n - 1)
    if (a <= 1) return "nao";

    int i, soma = 0;
    for(i = 1; i <= a/2; i++ ){
        if (a % i == 0){
            soma += i;
        }
    }

    if(soma == a){
        return "sim";
    }
    
    return "nao";
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%s", perfeito(a));
    return 0;
}
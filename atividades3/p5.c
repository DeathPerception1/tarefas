// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

int main(){
    
    int t;
    scanf("%d", &t); 

    int vetor[t];
    for(int i = 0; i < t; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = t - 1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }

    return 0;
    
}
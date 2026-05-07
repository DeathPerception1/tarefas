// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);

    int vetor[t]; 
    for(int i = 0; i < t; i++){
        scanf("%d", &vetor[i]);
    }

    // Le o numero que vai ser procurado no vetor
    scanf("%d", &n); // 

    int contador = 0;
    for(int i = 0; i < t; i++){
        if(vetor[i] == n){
            contador++;
        }
    }
    printf("%d\n", contador);

    for(int i = 0; i < t; i++){
        if(vetor[i] == n){
            printf("%d\n", i);
        }
    }

    return 0;
}
#include<stdio.h>

int main(){

    int a, i, m = 0;
    // tamanho do conjunto
    scanf("%d", &a);
    int vetor[a];

    // poderia determinar o m já, no entanto, vamos considerar que o número será aleatório inserido, não progressivo
    for(i=0; i < a ; i++){
        scanf("%d", &vetor[i]);
        // printf("valor: %d\n", vetor[i]); // teste
    }
    
    // forma não optimizada, mas funciona
    for(i=0; i<a ; i++){
        if(vetor[i] > m){
            m = vetor[i];
        }
    }
    printf("%d", m);
    return 0;

}
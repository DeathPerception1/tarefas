#include <stdio.h>

int main(){

    int tamanho, i;
    scanf("%d", &tamanho);
    // scanf("%d", &a);

    int vetor[tamanho], vetor2[tamanho], vetor3[tamanho];

    
    
    for(i = 0; i < tamanho ; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < tamanho ; i++){
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < tamanho; i++){
        vetor3[i] = vetor[i] * vetor2[i];
        printf("%d ", vetor3[i]);
    }


    return 0;   
}
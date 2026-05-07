// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

int main(){

    int tamanho, i;
    scanf("%d", &tamanho);
    int vetor[tamanho];

    for(i = 0; i < tamanho ; i++){
        scanf("%d", &vetor[i]);
    }

    int a_ser_procurado = 0, numero_achado = 0, estava_na_posicao = 0;
    printf("numero pra ser procurado: ");
    scanf("%d", &a_ser_procurado);
    
    
    for(i = 0; i < tamanho ; i++){
        if(vetor[i] == a_ser_procurado){
            numero_achado++;
        }
    }
    printf("");
    

    for(i = 0; i < tamanho; i++){
            estava_na_posicao = i;
            }

            printf("%d %d\n", numero_achado, estava_na_posicao);
        }

    

    return 0;
}
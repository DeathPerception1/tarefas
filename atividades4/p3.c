#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_linhas, num_colunas, k, i;
    do {
        // printf("Teste1\n");
        scanf("%d %d", &num_linhas, &num_colunas);
    } while( !(num_linhas >= 1 && num_linhas <= 100 ) || !( num_colunas >= 1 && num_colunas <= 100 ));

    // printf("Teste2\n");
    
    // 1. construindo a matriz (linhas)
    int** matriz = (int**) malloc(num_linhas * sizeof(int*));
    // 2. construindo a matriz (colunas)
    for(i = 0; i < num_linhas; i++){
        matriz[i] = (int*) malloc(num_colunas * sizeof(int));
    }


    // preenchendo a matriz... fora que eu consigo fazer a verificação de maior número agr
    int maior_numero;
    int indices[2];
    for(i = 0; i < num_linhas; i++){
        for(k = 0; k < num_colunas ; k++){
            scanf("%d", &matriz[i][k]);
            if (matriz[i][k] > maior_numero){
                maior_numero = matriz[i][k];
                indices[0] = i;
                indices[1] = k;
            }
        }
    }

    printf("%d %d", indices[0], indices[1]);

    return 0;

}

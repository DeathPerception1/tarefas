#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_linhas, num_colunas, k, i;
    do {
        printf("Teste1");
        scanf("%d %d", &num_linhas, &num_colunas);
    } while( !(num_linhas >= 1 && num_linhas <= 100 ) || !( num_colunas >= 1 && num_colunas <= 100 ));

    printf("Teste2");
    

}
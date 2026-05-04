#include <stdio.h>

int fibonnaci(int a){
    int i;
    switch (a)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    default:
        break;
    }

    int anterior, proximo, atual;
    anterior = 0;
    atual = 1;
    for(i=2; i <= a; i++){
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
    
}

int main(){

    int a;
    scanf("%d", &a);
    printf("%d",fibonnaci(a));

    return 0;

}
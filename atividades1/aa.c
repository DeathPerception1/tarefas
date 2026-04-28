#include <stdio.h>

int main(){
    float a = 0;
    for(int i = 0; i < 10000000000000000000000000 ; i++){
        a += 0.1;
    }
    printf("%f", a);
    
    return 0;
}
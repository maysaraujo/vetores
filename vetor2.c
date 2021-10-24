#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10];

    for (int i = 0; i < 10; i++){
        printf(" Insira o %d valor: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    for (int i = 9; i >= 0; i--){
        printf(" %.2f\n", vetor[i]);
    }
}
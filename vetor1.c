#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];

    for (int i = 0; i < 5; i++){
        printf(" Insira o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
        printf(" Valor: %d\n", vetor[i]);
    }

}
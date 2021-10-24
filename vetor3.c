#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[4], media;
    int i;

    for (int i = 0; i < 4; i++){
        printf(" \t\t\tInsira 4 notas\n");
        printf(" Insira a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
        printf(" %.2f\n", notas[i]);
        media += notas[i];
    }
        printf(" Media: %.2f\n", media / 4);

}
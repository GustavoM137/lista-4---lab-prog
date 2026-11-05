#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3
#define LIM 19

int main(){
    int num[TAM];

    srand(time(NULL));

    for (int i = 0; i < TAM; i++){
        num[i] = rand() % (LIM + 1);
        printf("Num[%d] = %d\n", i, num[i]);
    }
    
    // calcula média aritmética
    int soma = 0;

    for (int i = 0; i < TAM; i++){
        soma += num[i];
    }

    printf("Média aritmética: %.2f\n", (double) soma / TAM);

    // calcula média geométrica
    int produto = 1;

    for (int i = 0; i < TAM; i++){
        produto *= num[i];
    }

    printf("Média geométrica: %.2f\n", pow((double) produto, 1.0 / TAM));

    return 0;
}
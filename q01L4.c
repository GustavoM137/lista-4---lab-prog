#include <stdio.h>
#define TAM 15

int main(){
    float vet[TAM], menor, maior;

    puts("Digite o valor do elemento 0:");
    scanf("%f", vet);
    maior = menor = vet[0];

    for (int i = 1; i < TAM; i++){
        printf("Digite o valor do elemento %d:\n", i);
        scanf("%f", vet + i);

        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }

    puts("Vetor:");
    for (int i = 0; i < TAM; i++){
        printf("[%.2f] ", vet[i]);
    }
    putchar('\b');
    putchar('\n');
    
    printf("Soma do maior e do menor elemento fornecido = %.2f\n", maior + menor);

    return 0;
}
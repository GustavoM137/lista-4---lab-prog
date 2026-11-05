#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(){
    int min;
    puts("Digite o valor mínimo (base):");
    while(scanf("%d", &min) != 1){
        puts("Valor inválido, digite novamente:");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    int max;
    puts("Digite o valor máximo (limite):");
    while(scanf("%d", &max) != 1 || max < min){
        puts("Valor inválido, digite novamente:");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    // popular vetor
    srand(time(NULL));
    int vet_bolha[TAM], vet_selecao[TAM];
    for (int i = 0; i < TAM; i++){
        vet_selecao[i] = min + rand() % (max - min + 1);
        vet_bolha[i] = vet_selecao[i];
    }

    // ordenação por bolha
    for (int i = 0; i < TAM; i++){
        unsigned char flag = 1;
        for (int j = 0; j < TAM - i - 1; j++){
            if (vet_bolha[j] > vet_bolha[j + 1]){
                int temp = vet_bolha[j];
                vet_bolha[j] = vet_bolha[j + 1];
                vet_bolha[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag) break;
    }

    // ordenação por seleção
    for (int i = 0; i < TAM - 1; i++){
        int menor = i;
        for (int j = i + 1; j < TAM; j++){
            if (vet_selecao[j] < vet_selecao[menor]) menor = j;
        }
        if (menor != i){
            int temp = vet_selecao[i];
            vet_selecao[i] = vet_selecao[menor];
            vet_selecao[menor] = temp;
        }
    }

    return 0;
}
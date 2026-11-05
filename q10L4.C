#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 3

int main(){
    int min;
    puts("Digite o valor mínimo:");
    while(scanf("%d", &min) != 1){
        puts("Valor inválido");
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    int max;
    puts("Digite o valor máximo:");
    while(scanf("%d", &max) != 1 || max < min){
        puts("Valor inválido");
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    int mat[DIM][DIM];
    srand(time(NULL));
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            mat[i][j] = min + rand() % (max - min);
            printf("Elemento [%d][%d]: %d\n", i, j, mat[i][j]);
        }
    }

    int v;
    printf("Digite um valor para procurar na matriz [%d, %d]:\n", min, max);
    while(scanf("%d", &v) != 1 || v < min || v > max){
        puts("Valor inválido");
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    unsigned char count = 0;
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            if (mat[i][j] == v) count++;
        }
    }

    if (count > 0) printf("%d aparace na matriz %hhu vezes\n", v, count);
    else printf("%d não aparece na matriz\n", v);

    return 0;
}
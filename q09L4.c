#include <stdio.h>
#define DIM 3

int main(){
    int mat[DIM][DIM];

    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            printf("Digite o elemento [%d][%d]:\n", i, j);
            while(scanf("%d", &mat[i][j]) != 1){
                puts("Valor inválido, digite novamente:");
                int c;
                while((c = getchar()) != '\n' && c != EOF);
            }
        }
    }

    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            printf("Elemento [%d][%d]: %d ", i, j, mat[i][j]);
        }
        putchar('\n');
    }

    puts("Elementos da diagonal principal:");
    for (int i = 0; i < DIM; i++){
        printf("%d\n", mat[i][i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str1[TAM], str2[TAM];

    printf("Digite a string 1 (%d elementos):\n", TAM - 1);
    fgets(str1, sizeof(str1), stdin);
    
    // limpa o buffer
    size_t pos = strcspn(str1, "\n");
    if (str1[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str1[pos] = '\0';
    
    printf("Digite a string 2 (%d elementos):\n", TAM - 1);
    fgets(str2, sizeof(str2), stdin);

    // limpa o buffer
    pos = strcspn(str2, "\n");
    if (str2[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str2[pos] = '\0';

    printf("String 1: %s\nString 2: %s\n", str1, str2);

    puts("Usando strcmp():");
    if (strcmp(str1, str2) == 0) puts("As duas strings são iguais");
    else puts("As duas strings são diferentes");

    puts("Sem usar strcmp():");
    char igual = 1;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if (str1[i] != str2[i]){
            igual = 0;
            break;
        }
    }

    if (igual) puts("As duas strings são iguais");
    else puts("As duas strings são diferentes");

    return 0;
}
#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str1[TAM], str2[TAM], igual = 1;

    puts("Digite a string 1 (14 elementos):");
    fgets(str1, sizeof(str1), stdin);
    
    // limpa o buffer
    int c;
    if (str1[strcspn(str1, "\n")] == '\0')
        while ((c = getchar()) != '\n' && c != EOF);
        
    str1[strcspn(str1, "\n")] = '\0';
    
    puts("Digite a string 2 (14 elementos):");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("String 1: %s\nString 2: %s\n", str1, str2);

    puts("Usando strcmp():");
    if (strcmp(str1, str2) == 0) puts("As duas strings são iguais");
    else puts("As duas strings são diferentes");

    puts("Sem usar strcmp()");
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if (str1[i] != str2[i]){
            igual = 0;
            break;
        }
    }

    if (igual == 1) puts("As duas strings são iguais");
    else puts("As duas strings são diferentes");

    return 0;
}
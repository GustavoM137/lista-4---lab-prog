#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str[TAM], count = 0;

    printf("Digite uma string (%d elementos)\n", TAM - 1);
    fgets(str, sizeof(str), stdin);

    size_t pos = strcspn(str, "\n");
    if (str[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str[pos] = '\0';

    while (str[count] != '\0') count++;

    printf("String: %s\n", str);
    printf("Quantidade de caracteres: %d\n", count);

    return 0;
}
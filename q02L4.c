#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str[TAM], caractere;

    printf("Digite a string (%d elementos):\n", TAM - 1);
    fgets(str, sizeof(str), stdin);

    // limpa o buffer se não tiver \n na string
    size_t pos = strcspn(str, "\n");
    if (str[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str[pos] = '\0';

    puts("Digite o caractere:");
    scanf("%c", &caractere);
    
    printf("String = %s\n", str);

    if (strchr(str, caractere) != NULL) printf("A string contém o caractere fornecido ('%c').\n", caractere);
    else printf("A string não contém o caractere fornecido ('%c').\n", caractere);

    return 0;
}
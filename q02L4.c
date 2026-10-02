#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str[TAM], caractere, contem_char = 0;

    puts("Digite a string (14 elementos):");
    fgets(str, sizeof(str), stdin);

    // limpa o buffer se não tiver \n na string
    if (str[strcspn(str, "\n")] == '\0')
        while ((caractere = getchar()) != '\n' && caractere != EOF);

    puts("Digite o caractere:");
    scanf("%c", &caractere);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == caractere) contem_char = 1;
    }
    
    printf("String = %s\n", str);

    if (contem_char) printf("A string contém o caractere fornecido ('%c').\n", caractere);
    else printf("A string não contém o caractere fornecido ('%c').\n", caractere);

    return 0;
}
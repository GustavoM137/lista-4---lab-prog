#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    unsigned char str[TAM], count = 0;

    puts("Digite uma string (14 elementos)");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[count] != '\0') count++;

    printf("String: %s\n", str);
    printf("Quantidade de caracteres: %u\n", count);

    return 0;
}
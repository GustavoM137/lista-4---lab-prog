#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str1[TAM], str2[TAM];

    printf("Digite a string 1 (%d elementos):\n", TAM - 1);
    fgets(str1, sizeof(str1), stdin);
    size_t pos = strcspn(str1, "\n");
    if (str1[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str1[pos] = '\0';
    puts("String 1:");
    printf("%s\n", str1);

    printf("Digite a string 2 (%d elementos):\n", TAM - 1);
    fgets(str2, sizeof(str2), stdin);
    pos = strcspn(str2, "\n");
    if (str2[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str2[pos] = '\0';
    puts("String 2:");
    printf("%s\n", str2);

    // sem strcat
    char str_conc1[2*TAM - 1];
    char count = 0;
    for (int i = 0; str1[i] != '\0'; i++){
        str_conc1[i] = str1[i];
        count++;
    }
    for (int i = 0; str2[i] != '\0'; i++){
        str_conc1[count] = str2[i];
        count++;
    }
    str_conc1[count] = '\0';
    
    puts("Strings concatenadas sem strcat:");
    printf("%s\n\n", str_conc1);

    // com strcat
    char str_conc2[2*TAM - 1];
    str_conc2[0] = '\0';
    strcat(str_conc2, str1);
    strcat(str_conc2, str2);
    
    puts("Strings concatenadas com strcat:");
    printf("%s\n", str_conc2);

    return 0;
}
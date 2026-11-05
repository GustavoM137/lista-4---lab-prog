#include <stdio.h>
#include <string.h>
#define TAM 15

int main(){
    char str[TAM];

    printf("Digite a string(%d elementos):\n", TAM - 1);
    fgets(str, sizeof(str), stdin);
    size_t pos = strcspn(str, "\n");
    if (str[pos] == '\0'){
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    else str[pos] = '\0';

    // imprimindo invertida
    int len = strlen(str);
    puts("String impressa invertidamente:");
    for (int i = len; i > 0; i--){
        putchar(str[i - 1]);
    }
    putchar('\n');

    // invertendo a própria string
    for (int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("String invertida:\n%s\n", str);

    return 0;
}
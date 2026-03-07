#include <stdio.h>
#include <string.h>

int main(){
    char palavra[35] = "";

    printf("Escreva uma palavra de até 30 caracteres!\n");
    scanf("%s", palavra);

    printf("Contra: ");

    int tamanho = strlen(palavra);

    for(int i = tamanho - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }

    return 0;
}
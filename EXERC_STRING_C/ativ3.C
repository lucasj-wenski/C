#include <stdio.h>
#include <string.h>

 int main(){

    char str[201];
    char caracter;
    char *resu;

    printf("Digite uma string de até 200 caracteres: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Digite um caracter para procurar: ");
    scanf("%c", &caracter);

    resu = strrchr(str, caracter);

    if(resu != NULL){
        printf("Última ocorrência de '%c' foi: %s\n", caracter, resu);
    }else{
        printf("Inválido!!!");
    }

    return 0;
}
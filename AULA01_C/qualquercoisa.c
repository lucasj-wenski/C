#include <stdio.h>

int main(){

    int num1, num2, soma;

    printf("Vamos somar, digite o primeiro número:");
    scanf("%i", &num1);
    printf("Digite o segundo número:");
    scanf("%i", &num2);

    soma = num1 + num2;

    printf("O resultado da soma é %i \n" , soma);

    return 0;
}
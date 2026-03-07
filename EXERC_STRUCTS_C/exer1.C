#include <stdio.h>
#include <string.h>

// definir o struct
typedef struct
{
    char nome[30];
    float peso;
    float altura;
    float IMC;
    char resuIMC[30];  // aumentado para evitar overflow
} registros;

int main(){

    // criando os carinha lá
    registros esportista[5];

    for(int i = 0; i < 5; i++){
    
        printf("Cadastre o nome do esportista: ");
        scanf("%s", esportista[i].nome);  // removido &

        printf("Qual o peso dele(a) em Kg?\n");
        scanf("%f", &esportista[i].peso);

        printf("Qual a altura dele(a) em metros? (ex:1.70, 1.80)\n");
        scanf("%f", &esportista[i].altura);

        esportista[i].IMC = esportista[i].peso / (esportista[i].altura * esportista[i].altura);
    }

    for(int i = 0; i < 5; i++){
        if (esportista[i].IMC >= 40.0) {
            strcpy(esportista[i].resuIMC, "Obesidade III");
        } 
        else if (esportista[i].IMC >= 35.0) {
            strcpy(esportista[i].resuIMC, "Obesidade II");
        } 
        else if (esportista[i].IMC >= 30.0) {
            strcpy(esportista[i].resuIMC, "Obesidade I");
        } 
        else if (esportista[i].IMC >= 25.0) {
            strcpy(esportista[i].resuIMC, "Sobrepeso");
        } 
        else if (esportista[i].IMC >= 18.5) {
            strcpy(esportista[i].resuIMC, "Peso normal");
        }
        else {
            strcpy(esportista[i].resuIMC, "Abaixo do peso");
        }
    }

    for(int i = 0; i < 5; i++){
        if(i == 0){
            printf("\nDados do esportista 1:\n", i);
            printf("O nome do esportista é: %s \n", esportista[i].nome);
            printf("Tem o peso de %.2fKg e sua altura é %.2f. \n", esportista[i].peso, esportista[i].altura);
            printf("Seu imc é %.2f, então está em %s", esportista[i].IMC, esportista[i].resuIMC);
        }else{
            printf("\nDados do esportista %i:\n", i);
            printf("O nome do esportista é: %s \n", esportista[i].nome);
            printf("Tem o peso de %.2fKg e sua altura é %.2f. \n", esportista[i].peso, esportista[i].altura);
            printf("Seu imc é %.2f, então está em %s", esportista[i].IMC, esportista[i].resuIMC);
        }
    }

    return 0;
}
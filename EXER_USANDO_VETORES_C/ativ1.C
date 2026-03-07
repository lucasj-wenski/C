#include <stdio.h>

 int main(){
    printf("\n \n");
    float valores1[4];
    float valores2[4];
    float resultado[4];

    printf("Digite 4 valores para uma subtração! \n");

    for(int i = 0; i < 4; i++){
        if(i == 0){
        printf("Digite o 1° número! \n");
        scanf("%f", &valores1[i]);
        }else{
            printf("Digite o %i° número! \n", i+1);
            scanf("%f", &valores1[i]);
        }
    }

    printf("Digite outros 4 valores para uma subtração! \n");

    for(int i = 0; i < 4; i++){
        if(i == 0){
        printf("Digite o 1° número! \n");
        scanf("%f", &valores2[i]);
        }else{
            printf("Digite o %i° número! \n", i+1);
            scanf("%f", &valores2[i]);
        }
    }

    for(int i = 0; i < 4; i++){
        resultado[i] = valores1[i] - valores2[i];
    }

    printf("\n");
    
    for(int i = 0; i < 4; i++){
        printf("O resultado do %i° valor é: %f\n", i, resultado[i]);
    }

    printf("\n \n \n");
    return 0;
 }
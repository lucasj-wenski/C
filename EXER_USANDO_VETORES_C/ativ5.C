#include <stdio.h>

int main(){
    int val8[8]; 
    int nume;
    int achou = 0;
    
    for(int i = 0; i < 8; i++){

        printf("Digite o valor %i: \n", i);
        scanf("%i", &val8[i]);

        if(val8[i] < 0){

            printf("Negativo!!! Vai roda denovo kkkk");
            return 0;
        }
    }

    printf("Digita um número ae: \n");
    scanf("%i", &nume);

    for(int i = 0; i < 8; i++){
        if(nume == val8[i]){
            printf("Tem no vetor esse ae kk \n");
            achou = 1;
            break;
        }
    }

    if(achou == 0){
        printf("Não tem no vetor esse!\n");
    }
        
    return 0;
}
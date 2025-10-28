#include <stdio.h>

int main(){
    
    int esc;

    printf("Digite 1 para pular, 2 para caminhar:");
    scanf("%i", &esc);

    if( esc == 1){
        printf("Você pulou e caiu da escada. Final Ruim");
    }
    else if(esc == 2){
        printf("Você caminhou e chegou em uma praia. Final feliz");
    }
    else{
        printf("Essa escolha não existe.");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char algo[201] = "";
    int tamanho = 0;
    int quantidade = 0;
    int A = 0;
    int E = 0;
    int I = 0;
    int O = 0;
    int U = 0;

    printf("Escreva algo com até 200 caracteres!\n");

    if(fgets(algo, sizeof(algo), stdin) != NULL){
    
        algo[strcspn(algo, "\n")] = '\0';

        tamanho = strlen(algo);

        for(int i = 0; i < tamanho; i++){
            if(algo[i] == 'A' || algo[i] == 'a'){
                A++;
            }else if(algo[i] == 'E' || algo[i] == 'e'){
                E++;
            }else if(algo[i] == 'I' || algo[i] == 'i'){
                I++;
            }else if(algo[i] == 'O' || algo[i] == 'o'){
                O++;
            }else if(algo[i] == 'U' || algo[i] == 'u'){
                U++;
            }
        }

        quantidade = A + E + I + O + U;
        printf("Você escreveu %i vogais! %i A, %i E, %i I, %i O e %i U. \n", quantidade, A, E, I, O, U);

    } else {
        printf("Erro na leitura.\n");
    }

    return 0;
}
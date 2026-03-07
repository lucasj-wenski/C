#include <stdio.h>

int main(){

    int nume6posi[6];
    int i = 0;
    float resu =0;
    int mai;
    int meno;

    printf("\nDigite 6 números inteiros pares entre 1 a 20!\n");

    for (i = 0; i < 6; i++){
        printf("\nN%i: ", i);
        scanf("%i", &nume6posi[i]);

        if (nume6posi[i] < 1 || nume6posi[i] > 20){
            printf("Invalido!!! Vai ter que rodar denovo por não obdecer...");
            return 0;
        }
        
        if (nume6posi[i] % 2 != 0){
            printf("Impar!!! Vai ter que rodar denovo por não obdecer...");
            return 0;
        }
    }

    printf("\n\nNúmeros digitados:\n");
    for (i = 0; i < 6; i++){
        printf("%i\n", nume6posi[i]);
    }

    mai = nume6posi[0];
     meno = nume6posi[0];

    printf("Média dos números digitados:\n");
    for (i = 0; i < 6; i++){
        resu += nume6posi[i];
    }
    printf("%f \n", resu / 6);

    printf("Maior valor:\n");
    for(int b = 0; b < 6; b++){
        if (nume6posi[b] > mai){
            mai = nume6posi[b];
        }
    }
    printf("\n O maior número digitado é: %i \n", mai);

    printf("Menor valor:\n");
    for(int b = 0; b < 6; b++){
        if (nume6posi[b] < meno){
            meno = nume6posi[b];
        }
    }
    printf("\n O menor número digitado é: %i \n", meno);

    return 0;
}

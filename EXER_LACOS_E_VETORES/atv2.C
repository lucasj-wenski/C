#include <stdio.h>
#include <string.h>

    int main() {
        
        char nome[7];
        int i;
        nome[0] = 'G';
        nome[1] = 'a';
        nome[2] = 'l';
        nome[3] = 'i';
        nome[4] = 'n';
        nome[5] = 'h';
        nome[6] = 'a';

        for (i = 0; i < 7; i++) {  
        printf("%c", nome[i]);
        }

        return 0;
    }
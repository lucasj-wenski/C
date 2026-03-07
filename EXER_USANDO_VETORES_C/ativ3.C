#include <stdio.h>

    int main(){

        int vertornormal[4];
        int vertorrevert[4];

        vertornormal[0] = 1;
        vertornormal[1] = 2;
        vertornormal[2] = 3;
        vertornormal[3] = 4;
        vertornormal[4] = 5;

        int b = 4;

        for (int i = 0; i < 5; i++){
            vertorrevert[b] = vertornormal[i];
            b--;
        }
        
        printf("\n O vetor normal tem esses números armazenados:"); 
        for (int i = 0; i < 5; i++){
            printf("\n %i", vertornormal[i]);
        }

        printf("\n O vetor invertido tem esses:"); 
        for (int i = 0; i < 5; i++){
            printf("\n %i", vertorrevert[i]);
        }

        return 0;
    }
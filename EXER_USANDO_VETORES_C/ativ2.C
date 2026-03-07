#include  <stdio.h>
 
    int main(){

        int vetnumeros[15];
        vetnumeros[0] = 12;
        vetnumeros[1] = 7;
        vetnumeros[2] = 25;
        vetnumeros[3] = 40;
        vetnumeros[4] = 3;
        vetnumeros[5] = 18;
        vetnumeros[6] = 29;
        vetnumeros[7] = 50;
        vetnumeros[8] = 6;
        vetnumeros[9] = 14;
        vetnumeros[10] = 33;
        vetnumeros[11] = 21;
        vetnumeros[12] = 9;
        vetnumeros[13] = 60;
        vetnumeros[14] = 2;

        for(int i = 0; i < 15; i++){
            if(vetnumeros[i] % 2 == 0 || vetnumeros[i] == 0){
                printf("O número %i é PAR. \n", vetnumeros[i]);
            }else{
                printf("O número %i é IMPAR. \n", vetnumeros[i]);
            }
        }

        return 0;
    }
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char data[15];
    char timeMandan[30];
    char timeVisit[30];
    int golsMan;
    int golsVis;
    char resuta[50];
} jogo;

int main(){

    jogo partida[5];
        
    printf("Campeonato Brasileiro de Futebol!\n");
    printf("Preencha com as informações das 5 partidas:\n");

    for(int i = 0; i < 5; i++){

        printf("\nPartida %i\n", i + 1);

        printf("Escreva a data que o jogo aconteceu (ex: 12/02/2026): \n");
        scanf(" %14[^\n]", partida[i].data);

        printf("Escreva o time mandante: \n");
        scanf(" %29[^\n]", partida[i].timeMandan);

        printf("Escreva o time visitante: \n");
        scanf(" %29[^\n]", partida[i].timeVisit);

        printf("Escreva o número de gols do time mandante: \n");
        scanf("%i", &partida[i].golsMan);

        printf("Escreva o número de gols do time visitante: \n");
        scanf("%i", &partida[i].golsVis);

        if(partida[i].golsMan > partida[i].golsVis){
            sprintf(partida[i].resuta, "O time %s venceu!", partida[i].timeMandan);
        }else if(partida[i].golsMan < partida[i].golsVis){
            sprintf(partida[i].resuta, "O time %s venceu!", partida[i].timeVisit);
        }else{
            strcpy(partida[i].resuta, "O jogo terminou em empate!");
        }
    }

    printf("\nRESULTADOS DAS PARTIDAS:\n\n");

    for(int i = 0; i < 5; i++){

        printf("Jogo %d\n", i + 1);
        printf("Data: %s\n", partida[i].data);
        printf("%s x %s\n", partida[i].timeMandan, partida[i].timeVisit);
        printf("Placar: %i x %i\n", partida[i].golsMan, partida[i].golsVis);
        printf("%s\n\n", partida[i].resuta);
    }

    return 0;
}
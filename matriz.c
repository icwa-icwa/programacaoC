#include <stdio.h>
int main () {
    char coluna[10]={'A','B','C','D','E','F','G','H','I','J'};// letras para colunas
    char *linha[] ={" 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"}; // numeros para as linhas com aspas duplas
    int tabuleiro [10][10];
    printf("    Tabuleiro Batalha Naval\n");
    printf(" ");
    for(int j = 0; j < 10; j++){
        printf("  %c", coluna[j]);// deve ter um espaço depois das aspas
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%s", linha[i]);
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j]=0;
            printf(" 0 ");
        }
        printf("\n");
    }
    int navio[3][1] = {
        {3}, {3},{3}
    }; 
    for(int i = 3; i<6; i++){
        for(int j = 3; j < 4; j++){
        }
    }
    int navio2[1][3]={
        {3, 3, 3}
    };
        for(int i =6; i<7; i++){
            for (int j = 6; j < 8; j++){
            }

        }
        // exibir tabuleiro com os navios

    return 0;
    }

#include <stdio.h>
int main(){
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char *coluna[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    int tabuleiro[10][10];
    printf("     Tabuleiro Batalha Naval\n");
    printf("    "); // espaço para iniciar o cabeçalho das colunas
    for(int i = 0; i < 10; i++){
        printf("%-3c",linha[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%-3s", coluna[i]);
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
            printf(" 0 ");
            
        }
        printf("\n");
    }
    // Navio_1 com 3 células atribuídas com o 3.
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 3;
        }
    }

}
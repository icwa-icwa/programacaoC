#include <stdio.h>
int main () {
    char coluna[10]={'A','B','C','D','E','F','G','H','I','J'};// letras para colunas
    char *linha[] ={'1','2','3','4','5','6','7','8','9','10'}; // numeros para as linhas
    int tabuleiro [10][10];
    printf("Tabuleiro Batalha Naval\n");
    printf(" ");
    for(int j = 0; j < 10; j++){
        printf("%c", coluna[j]);
    }
    for (int i = 0; i < 10; i++){
        printf("%s", linha[i]);
        for(int j = 0; j < 10; j++){
            printf("%c", coluna[j]);
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
    }

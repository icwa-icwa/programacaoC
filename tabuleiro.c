#include <stdio.h>
int main(){
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char *linha[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    int tabuleiro[10][10];
    printf("     Tabuleiro Batalha Naval\n");
    printf("    "); // espaço para iniciar o cabeçalho das colunas
    for(int i = 0; i < 10; i++){
        printf("%-3c",coluna[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%-3s", linha[i]);
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
            printf(" 0 ");
            
        }
        printf("\n");
    }
    // Navio_1 com 3 células na vertical atribuídas com o 3.
    for(int i = 4; i < 7; i++){// posiciona o navio na linha
        for(int j = 3; j < 4; j++){// posiciona o navio na coluna
            tabuleiro[i][j] = 3;
        }
    }
     // Navio_2 com 3 células na horizontal atribuídas com o 3.
    for(int i = 7; i < 8; i++){// posiciona o navio na linha
        for(int j = 6; j < 9; j++){// posiciona o navio na coluna
            tabuleiro[i][j] = 3;
        }
    }
    printf("\n");
    // atualiza o tabuleiro 
    printf("    *** Nível Novato***\n");
    printf("       Tabuleiro com Navios\n");
    printf("   "); // espaço para iniciar o cabeçalho das colunas
    for(int i = 0; i < 10; i++){
        printf("%-3c",coluna[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%-3s", linha[i]);
        for(int j = 0; j < 10; j++){
            printf("%-3d", tabuleiro[i][j]);
            
        }
        printf("\n");
    }
    // limpa o tabuleiro antes dos navios do nível aventureiro
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // inclusão de dois navios na diagonal para o nível aventureiro
    // Navio_3 com 3 células numa diagonal qualquer atribuídas com o 3.
    for(int i = 3; i < 6; i++){
        for( int j = 4; j < 7; j++){
            if(j-i == 1)
            tabuleiro[i][j] = 3;
        }
    }
     // Navio_3 com 3 células na diagonal secundária atribuídas com o 3.
    for(int i = 0; i < 10; i++){
        for( int j = 0; j < 3; j++){
            if(i+j == 9)
            tabuleiro[i][j] = 3;
        }
    }
     printf("\n");
    // atualiza o tabuleiro 
    printf("    *** Nível Aventureiro***\n");
    printf("       Tabuleiro com Navios\n");
    printf("   "); // espaço para iniciar o cabeçalho das colunas
    for(int i = 0; i < 10; i++){
        printf("%-3c",coluna[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%-3s", linha[i]);
        for(int j = 0; j < 10; j++){
            printf("%-3d", tabuleiro[i][j]);
            
        }
        printf("\n");
    }

    
    printf("\n");
    return 0;
}
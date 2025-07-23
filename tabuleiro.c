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
    printf("\n");
    printf("    *** Nível Novato***\n");
    // Navio_1 com 3 células na vertical atribuídas com o 3.
    int navio1[3][1] = {{3}, {3}, {3}}; // representa o navio ocupando 3 linhas e 1 coluna
    for(int i = 4; i < 7; i++){// posiciona o navio na linha
        for(int j = 3; j < 4; j++){// posiciona o navio na coluna
            tabuleiro[i][j] = 3;
            printf("navio1[%d] [%d]\n", i, j); // Exibir a posição do navio

        }
    }
     // Navio_2 com 3 células na horizontal atribuídas com o 3.
     int navio2[1][3] = {{3, 3, 3}}; // representa o navio ocupando 3 colunas e 1 linha

    for(int i = 7; i < 8; i++){// posiciona o navio na linha
        for(int j = 6; j < 9; j++){// posiciona o navio na coluna
            tabuleiro[i][j] = 3;
            printf("navio2[%d] [%d]\n", i, j); // Exibir a posição do navio

        }
    }
    printf("\n");
    // atualiza o tabuleiro 
    
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
     // Navio_4 com 3 células na diagonal secundária atribuídas com o 3.
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
    printf("Verifica sobreposição nível Aventureiro...\n");
    
     // Verifica se os navios se sobrepõem de forma simplificada.
     // Se contaNavios for múltiplo de 3 não há sobreposição, caso contrário, há sobreposição.
     // A lógica é baseada na premissa de que cada navio ocupa apenas e tão somente 3 células em sequência.
    int contaNavios = 0;
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if(tabuleiro[i][j] == 3){
                contaNavios++;
            }    
        }
    }
    int navios = contaNavios / 3;
    printf("Número de navios: %d\n",navios);
    if(contaNavios % 3 == 0){
        printf("Os navios não se sobrepõem.\n");
    } else {
        printf("Os navios se sobrepõem.\n");
    }
    // limpa o tabuleiro antes das figuras geométricas
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // cone com atribuição de 5 
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == 0 && j == 5){// topo do cone
            tabuleiro[i][j] = 5;
        } else if(i == 1 && j >= 4 && j <= 6) {// meio do cone
            tabuleiro[i][j] = 5;
        } else if(i == 2 && j >=3 && j <= 7) {//base do cone
            tabuleiro[i][j] = 5;
        }
    }
    }
    // cruz com atribuição de 1
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == 5 && j == 2){//topo da cruz
                tabuleiro[i][j] = 1;
            } else if(i == 6 && j >= 0 && j <=4){//meio da cruz
                tabuleiro[i][j] = 1;
            } else if(i == 7 && j == 2){// base da cruz
                tabuleiro[i][j] = 1;
            }
        }
    }
    // octaedro com atribuição de 4
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if( i == 7 && j == 8){//topo do octaedro
                tabuleiro[i][j] = 4;
            } else if(i == 8 && j >=7 && j <= 9){//meio do octaedro
                tabuleiro[i][j] = 4;
            } else if(i == 9 && j == 8){//base do octaedro
                tabuleiro[i][j] = 4;
            }
        }
    }

  printf("\n");
    // atualiza o tabuleiro 
    printf("    *** Nível Mestre ***\n");
    printf("       Tabuleiro com Figuras\n");
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
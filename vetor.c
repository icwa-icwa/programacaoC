#include <stdio.h>
#include <math.h>
int main () {


   /* char coluna[10]={'A','B','C','D','E','F','G','H','I','J'};// letras para colunas
        
    printf("    Tabuleiro Batalha Naval\n");
    printf(" ");
    for(int j = 0; j < 10; j++){
        printf("  %c", coluna[j]);// deve ter um espaço depois das aspas
    }
    printf("\n");
    printf("\n");*/
    int vetor[5] = {1, 2, 3, 4, 5};

    for (int j = 0; j < 5; j++){
        printf(" %d", vetor[j]);// quando havia \n depois do %d manda pular uma linha.
        
    }
    /* para que os numeros representem colunas e nao linhas basta nao pular linha
    no primeiro for configurei as colunas
    tive que mandar pular linha fora do for
    e iniciei outro for
    tive que reiniciar o vetor para comandar uma outra expressão e imprimir */
    printf("\n");
    for(int i = 0; i < 5; i++){
        
        printf(" %d", i*2, vetor[i]);// se chamar o i ele dá o valor do índice e nesse caso não precisa reiniciar o vetor
    }
    printf("\n");
    return 0;
}
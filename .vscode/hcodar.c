#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    // gerar numero aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // numero entre 1 e 100

    // inicio do jogo
    printf("Bemvindo ao jogo Maior, Menor ou Igual\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    printf("O número do Computador é: %d", numeroComputador);

    switch(tipoComparacao)
    {
        case 'M':
        case 'm':
        printf("Você escolheu a opção Maior.\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
        case 'N':
        case 'n':
        printf("Você escolheu a opção Menor.\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
        case 'I':
        case 'i':
        printf("Você escolheu a opção Igual.\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
        default:
            printf("Opção de jogo inválida\n");
        break;
    }
    printf("O número do Computador é: %d e o número do Jogador é: %d", numeroComputador, numeroJogador);
    if (resultado == 1)
    {
        printf("Você venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }

printf("\n");
    return 0;
}
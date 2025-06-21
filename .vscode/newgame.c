#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
//tema 3 hora de codar mestre
int numeroJogador, numeroComputador, resultado;
char tipoOperacao;

// Gerar numero aleatorio
srand(time(0));
numeroComputador = rand() % 10 +1;//Numero entre 1 e 100
// inicio de jogo
printf("Bem-vindo ao jogo Operações Matemáticas!\n");
printf("Você deve escolher um número e um tipo de operação.\n");
printf("M. Multiplicação\n");
printf("D. Divisão\n");
printf("A. Adição\n");
printf("S. Subtração\n");

printf("Escolha a operação: \n");
scanf(" %c", &tipoOperacao);

printf("Digite seu numero (entre 1 e 10):\n");
scanf("%d", &numeroJogador);

// exibir numero do computador
//printf("O número do computador é: %d\n", numeroComputador);
//scanf("%d", &numeroComputador);

switch(tipoOperacao){
    case 'M':
    case 'm':
        printf("Você escolheu Multiplicão!\n");
        printf("Número do computador %d e Número do jogador %d\n", numeroComputador,numeroJogador);
        printf("Digite o resultado da multiplicação: \n");
        scanf("%d",&resultado);
        break;

    case 'D':
    case 'd':
        printf("Você escolheu Divisão!\n");
        printf("Número do computador %d e Número do jogador %d\n", numeroComputador,numeroJogador);
        printf("Digite o resultado da divisão: \n");
        scanf("%d",&resultado);
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo inválida. \n");
        break;
}


if (resultado == numeroComputador * numeroJogador)
{
    printf("Parabéns, você acertou! O resultado é: %d\n", resultado);
    
} else {
    printf("Infelizmente, você errou!\n");
}

if (resultado == numeroComputador / numeroJogador)
{
    printf("Parabéns, você acertou! O resultado é: %d\n", resultado);
    
} else {
    printf("Infelizmente, você errou!\n");
}




return 0;

}

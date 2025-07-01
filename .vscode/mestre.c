#include <stdio.h>
int main(){

//variaveis para armazenar os dados da Carta 1

char Estado_Carta1[50], Codigo_da_Carta1[50], Nome_da_Cidade_Carta1[50];
int Populacao_Carta1, Numero_de_Pontos_Turisticos_Carta1;
float Area_em_Km2_Carta1, PIB_Carta1, Densidade_Populacional_Carta1, PIB_per_Capita_Carta1;

// Variaveis para armazenar os dados da Carta 2
char Estado_Carta2[50], Codigo_da_Carta2[50], Nome_da_Cidade_Carta2[50];
int Populacao_Carta2, Numero_de_Pontos_Turisticos_Carta2;
float Area_em_Km2_Carta2, PIB_Carta2, Densidade_Populacional_Carta2, PIB_per_Capita_Carta2;

printf("****Jogo do Trunfo****\n");

printf("\nDigite os dados da Carta 1\n");
//Solicitação de dados para a carta 1
/*printf("Carta 1: \n");

printf("Digite o Estado: \n");   
scanf("%s", Estado_Carta1);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta1);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade_Carta1);*/

printf("Digite a População da Carta 1: \n");
scanf("%d", &Populacao_Carta1);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2_Carta1);

printf("Digite o PIB: \n");
scanf("%f", &PIB_Carta1);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos_Carta1);

// Cálculos da Carta 1
// Variáveis para armazenar os resultados dos cálculos

Densidade_Populacional_Carta1 = (float) Populacao_Carta1 / Area_em_Km2_Carta1;
PIB_per_Capita_Carta1 = (float) PIB_Carta1 / Populacao_Carta1;  

//Solicitação de dados para a carta 2 
/*printf("\nDigite os dados da Carta 2\n");
printf("Carta 2: \n");

printf("Digite o Estado: \n");
scanf("%s", Estado_Carta2);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta2);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade_Carta2);*/

printf("Digite a População da Carta 2: \n");
scanf("%d", &Populacao_Carta2);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2_Carta2);

printf("Digite o PIB: \n");
scanf("%f", &PIB_Carta2);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos_Carta2);

// Cálculos da Carta 2
// Variáveis para armazenar os resultados dos cálculos

Densidade_Populacional_Carta2 = (float) Populacao_Carta2 / Area_em_Km2_Carta2;
PIB_per_Capita_Carta2 = (float) PIB_Carta2 / Populacao_Carta2; 


// implimentação do nivel novato
printf("\n****Nível Novato****\n");
printf("Em quesito Densidade Populacional, a Carta 1 é: %.2f e a Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
if (Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2) {
    printf("A Carta 1 venceu!\n");
} else if (Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2) {
    printf("A Carta 2 venceu!\n");
} else {
    printf("As Cartas empataram em Densidade Populacional.\n");
}

// Implementação do nivel aventureiro
printf("\n****Nível Aventureiro****\n");
// criação do menu com o switch case para escolher o quesito a ser comparado
int menu;
printf("*** Menu de Opções ***\n");

printf("Digite 1 para Estado da Carta\n"); // exibe apens os nomes dos Estados das 2 cartas sem comparar
printf("Digite 2 para População da Carta\n");
printf("Digite 3 para Área em Km2 da Carta\n");
printf("Digite 4 para PIB da Carta\n");
printf("Digite 5 para Número de Pontos Turísticos\n");
printf("Digite 6 para Densidade Populacional\n");
printf("Digite 7 para PIB per Capita\n");
printf("\nEscolha no menu o quesito a ser comparado:\n");
scanf("%d", &menu);

switch(menu){
    case 1:
        printf("O Estado da Carta 1 é: %s e O Estado da Carta 2 é: %s\n", Estado_Carta1, Estado_Carta2);
        break;
    case 2:
        printf("A População da Carta 1 é : %d e a População da Carta 2 é: %d\n", Populacao_Carta1, Populacao_Carta2);
        if (Populacao_Carta1 > Populacao_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Populacao_Carta1 < Populacao_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em População.\n");
        }
        break;
    case 3:
        printf("A Área em Km2 da Carta 1 é: %.2f e a Área em Km2 da Carta 2 é: %.2f\n", Area_em_Km2_Carta1, Area_em_Km2_Carta2);
        if (Area_em_Km2_Carta1 > Area_em_Km2_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Area_em_Km2_Carta1 < Area_em_Km2_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em Área.\n");
        }
        break;
    case 4:
        printf("O PIB da Carta 1 é: %.2f e o PIB da Carta 2 é: %.2f\n", PIB_Carta1, PIB_Carta2);
        if (PIB_Carta1 > PIB_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (PIB_Carta1 < PIB_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em PIB.\n");
        }
        break;
    case 5:
        printf("O Número de Pontos Turísticos da Carta 1 é: %d e o Número de Pontos Turísticos da Carta 2 é: %d\n", Numero_de_Pontos_Turisticos_Carta1, Numero_de_Pontos_Turisticos_Carta2);
        if (Numero_de_Pontos_Turisticos_Carta1 > Numero_de_Pontos_Turisticos_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Numero_de_Pontos_Turisticos_Carta1 < Numero_de_Pontos_Turisticos_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em Número de Pontos Turísticos.\n");
        }   
        break;
    case 6: 
        printf("A Densidade Populacional da Carta 1 é: %.2f e a Densidade Populacional da Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
        if (Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em Densidade Populacional.\n");
        }
        break;
    case 7:
        printf("O PIB per Capita da Carta 1 é: %.2f e o PIB per Capita da Carta 2 é: %.2f\n", PIB_per_Capita_Carta1, PIB_per_Capita_Carta2);
        if (PIB_per_Capita_Carta1 > PIB_per_Capita_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (PIB_per_Capita_Carta1 < PIB_per_Capita_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em PIB per Capita.\n");
        }
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        printf("Escolha o quesito a ser comparado.\n");
        scanf("%d", &menu);
        break;
}

// Implementação do nivel mestre
printf("\n****Nível Mestre****\n");


// Inclusão de menu para escolher o quesito a ser comparado
int primeiroQuesito, segundoQuesito, resultado1, resultado2;
printf("*** Menu de Opções ***\n");
printf("\nEscolha no Menu o quesito a ser comparado\n");

printf("Digite 1 para Estado da Carta\n"); // exibe apenas os nomes dos Estados das 2 cartas sem comparar
printf("Digite 2 para População da Carta\n");
printf("Digite 3 para Área em Km2 da Carta\n");
printf("Digite 4 para PIB da Carta\n");
printf("Digite 5 para Número de Pontos Turísticos\n");
printf("Digite 6 Densidade Populacional\n");
printf("Digite 7 para PIB per Capita\n");
printf("\nEscolha o primeiro quesito a ser comparado:\n");
scanf("%d", &primeiroQuesito);


switch(primeiroQuesito){
    case 1:
        printf("O Estado da Carta 1 é: %s e O Estado da Carta 2 é: %s\n", Estado_Carta1, Estado_Carta2);
        break;
    case 2:
        printf("A População da Carta 1 é : %d e a População da Carta 2 é: %d\n", Populacao_Carta1, Populacao_Carta2);
        resultado1 = Populacao_Carta1 > Populacao_Carta2 ? 1 : 0;
        break;
    case 3:
        printf("A Área em Km2 da Carta 1 é: %.2f e a Área em Km2 da Carta 2 é: %.2f\n", Area_em_Km2_Carta1, Area_em_Km2_Carta2);
        resultado1 = Area_em_Km2_Carta1 > Area_em_Km2_Carta2 ? 1 : 0;
        break;
    case 4:
        printf("O PIB da Carta 1 é: %.2f e o PIB da Carta 2 é: %.2f\n", PIB_Carta1, PIB_Carta2);
        resultado1 = PIB_Carta1 > PIB_Carta2 ? 1 : 0;
        break;
    case 5:
        printf("O Número de Pontos Turísticos da Carta 1 é: %d e  Número de Pontos Turísticos da Carta 2 é: %d\n", Numero_de_Pontos_Turisticos_Carta1, Numero_de_Pontos_Turisticos_Carta2);
        resultado1 = Numero_de_Pontos_Turisticos_Carta1 < Numero_de_Pontos_Turisticos_Carta2 ? 1 : 0;
        break;
    case 6:
        printf("A Densidade Populacional da Carta 1 é: %.2f e a Densidade Populacional da Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
        resultado1 = Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2 ? 1 : 0;
        break;
    case 7:
        printf("O PIB per Capita da Carta 1 é: %.2f e o PIB per Capita da Carta 2 é: %.2f\n", PIB_per_Capita_Carta1, PIB_per_Capita_Carta2);
        resultado1 = PIB_per_Capita_Carta1 > PIB_per_Capita_Carta2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        break;
}
printf("\nEscolha o segundo quesito a ser comparado:\n");
scanf("%d", &segundoQuesito);
// Verificação para garantir que o segundo quesito é diferente do primeiro
// Se o usuário escolher o mesmo quesito, solicitar novamente
        if (primeiroQuesito == segundoQuesito) {
        printf("Você escolheu o mesmo quesito. Tente novamente.\n");
        printf("Escolha o segundo quesito a ser comparado:\n");
        scanf("%d", &segundoQuesito);

    }
 switch(segundoQuesito) {
    case 1:
        printf("O Estado da Carta 1 é: %s e O Estado da Carta 2 é: %s\n", Estado_Carta1, Estado_Carta2);
        break;
    case 2:
        printf("A População da Carta 1 é : %d e a População da Carta 2 é: %d\n", Populacao_Carta1, Populacao_Carta2);
        resultado2 = Populacao_Carta1 < Populacao_Carta2 ? 0 : 1;
        break;
    case 3:
        printf("A Área em Km2 da Carta 1 é: %.2f e a Área em Km2 da Carta 2 é: %.2f\n", Area_em_Km2_Carta1, Area_em_Km2_Carta2);
        resultado2 = Area_em_Km2_Carta1 < Area_em_Km2_Carta2 ? 0 : 1;
        break;
    case 4:
        printf("O PIB da Carta 1 é: %.2f e o PIB da Carta 2 é: %.2f\n", PIB_Carta1, PIB_Carta2);
        resultado2 = PIB_Carta1 < PIB_Carta2 ? 0 : 1;
        break;
    case 5:
        printf("O Número de Pontos Turísticos da Carta 1 é: %d e o Número de Pontos Turísticosl da Carta 2 é: %d\n",Numero_de_Pontos_Turisticos_Carta1, Numero_de_Pontos_Turisticos_Carta2);
        resultado2 = Numero_de_Pontos_Turisticos_Carta1 < Numero_de_Pontos_Turisticos_Carta2 ? 0 : 1;
        break;
    case 6:
        printf("A Densidade Populacional da Carta 1 é: %.2f e a Densidade Populacional da Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
        resultado2 = Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2 ? 0 : 1;
        break;
    case 7:
        printf("O PIB per Capita da Carta 1 é: %.2f e o PIB per Capita da Carta 2 é: %.2f\n", PIB_per_Capita_Carta1, PIB_per_Capita_Carta2);
        resultado2 = PIB_per_Capita_Carta1 < PIB_per_Capita_Carta2 ? 0 : 1;
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        printf("Escolha o segundo quesito a ser comparado.\n");
        scanf("%d", &segundoQuesito);
        // Repetir o switch para o segundo quesito
        break;

    }  
      
 // no caso em que em um quesito uma carta vence e no outro quesito há um empate qual carta é a vencedora
        // Se o resultado1 for verdadeiro (1) e o resultado2 for verdadeiro (1), a Carta 1 vence
        // Se o resultado1 for verdadeiro (1) e o resultado2 for falso (0), a Carta 1 perde
        // Se o resultado1 for falso (0) e o resultado2 for verdadeiro (1), a Carta 1 perde
        // Se ambos forem falsos (0), a carta 1 perde, mesmo considerando que 0 em ambos os quesitos possa ser empate
         

     
    // Verificação dos resultados para os quesitos escolhidos
        if (resultado1 && resultado2) {
            printf("A Carta 1 venceu!\n");
        } else if (resultado1 != resultado2) {
            printf("Houve um empate!\n");
        } else {
            printf("A Carta 2 venceu!\n");
        }
return 0;
    }



      
/*No nível mestre deve ser escolhido dois quesitos, 
vence quem somar o maior número e também deve ser implementado o empate, e o ternário 
no nivel aventureiro a implementação era escolher qual quesito comparar */
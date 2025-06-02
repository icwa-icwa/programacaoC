#include <stdio.h>

int main(){
    printf("Desafio Xadrez!\n");
    char Estado[1], Codigo_da_Carta[3], Nome_da_Cidade[20];
    int Populacao, Numero_de_Pontos_Turisticos;
    float Area_em_Km2, PIB;

    printf("Digite a Inicial do Estado: \n");
    scanf("%s", &Estado);
   
    printf("Digite o Codigo: \n");
    scanf("%s", &Codigo_da_Carta);
   
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome_da_Cidade);
   
    printf("Digite a População: \n");
    scanf("%d", &Populacao);
    
    printf("Digite a Área em Km2: \n");
    scanf("%f", &Area_em_Km2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos);
    
    printf("A inicial do Estado é: %s \n", Estado);
    printf("O Codigo da Carta é: %s", Codigo_da_Carta);
    printf("O Nome da Cidade é: %s \n", Nome_da_Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f \n", Area_em_Km2);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);


    

    
    



}
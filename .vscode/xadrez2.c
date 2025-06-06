#include <stdio.h>

int main(){
    printf("Desafio Xadrez!\n");
    char Estado[50], Codigo_da_Carta[50], Nome_da_Cidade[50];
    int Populacao, Numero_de_Pontos_Turisticos;
    float Area_em_Km2, PIB, Densidade_Populacional,PIB_Per_Capita;

    Densidade_Populacional = (float) Populacao/Area_em_Km2;
    PIB_Per_Capita = (float) PIB/Populacao;

    printf("Carta 1: \n");
    printf("Digite a Inicial do Estado: \n");
    scanf("%s", &Estado);
   
    printf("Digite o Código: \n");
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

    printf("Carta 2: \n");
    printf("Digite a Inicial do Estado: \n");
    scanf("%s", &Estado);
   
    printf("Digite o Código: \n");
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
    
    printf("Carta1: \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %.2f \n", Area_em_Km2);
    printf("PIB: %.2f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional);
    printf("PIB per Capita: %.2f", PIB_Per_Capita);

    printf("Carta2: \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %.2f \n", Area_em_Km2);
    printf("PIB: %.2f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional);
    printf("PIB per Capita: %.2f", PIB_Per_Capita);

    return 0;


    

    
    



}
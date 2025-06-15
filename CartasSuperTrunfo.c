#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado[15];
    char codigo[15];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int pontos;
    
    char estado2 [15];
    char codigo2 [15];
    char cidade2 [15];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Cadastro da Carta1:
    printf("Insira os dados da Carta 1:\n");
    
    printf("Estado da carta: \n");
    scanf("%s",estado);
    
    printf("Codigo da carta: \n");
    scanf("%s",codigo);
    
    printf("Nome da cidade: \n");
    scanf("%s",cidade);
    
    printf("Populacao da cidade: \n");
    scanf("%d",&populacao);
    
    printf("Area da cidade: \n");
    scanf("%f",&area);
    
    printf("PIB da cidade: \n");
    scanf("%f",&pib);
    
    printf("Pontos turisticos: \n");
    scanf("%d",&pontos);

    // Exibição dos Dados das Carta2:
    printf("\nObrigado pelo cadastro.Esses sao os dados da Carta 1:\n\n Estado: %s\n Codigo: %s\n Cidade: %s\n Populacao: %d\n Area: %f Km²\n  PIB: %f Bilhoes de reais\n Pontos Turisticos: %d\n", estado , codigo , cidade , populacao , area , pib , pontos);
    
    // Cadastro da Carta2:
    printf("\n\nInsira agora os dados da carta 2: \n");
    
    
    printf("Estado da carta: \n");
    scanf("%s",estado2);
    
    printf("Codigo da carta: \n");
    scanf("%s",codigo2);
    
    printf("Nome da cidade: \n");
    scanf("%s",cidade2);
    
    printf("Populacao da cidade: \n");
    scanf("%d",&populacao2);
    
    printf("Area da cidade: \n");
    scanf("%f",&area2);
    
    printf("PIB da cidade: \n");
    scanf("%f",&pib2);
    
    printf("Pontos turisticos: \n");
    scanf("%d",&pontos2);
    
    // Exibição dos Dados das Carta2:

    printf("\nObrigado pelo cadastro.Esses sao os dados da Carta 2:\n\n Estado: %s\n Codigo: %s\n Cidade: %s\n Populacao: %d\n Area: %f Km²\n  PIB: %f Bilhoes de reais\n Pontos Turisticos: %d\n", estado2 , codigo2 , cidade2 , populacao2 , area2 , pib2 , pontos2);

    
    
    

    return 0;
}

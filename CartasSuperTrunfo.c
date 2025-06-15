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
    float densidade;
    float percapta;
    float superpoder;
    
    char estado2 [15];
    char codigo2 [15];
    char cidade2 [15];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapta2;
    float superpoder2;

    /* Variaveis inicializadas para TESTE da comparação de cartas DEVEM FICAR COMENTADAS NA EXECUÇÃO FINAL DO CODIGO
    char estado[15] ;
    char codigo[15] ;
    char cidade[15] ;
    float populacao = 10;
    float area = 10;
    float pib = 10;
    int pontos = 10;
    float densidade = 10;
    float percapta = 10;
    float superpoder = 10;
    
    char estado2 [15] ;
    char codigo2 [15] ;
    char cidade2 [15];
    float populacao2 = 3;
    float area2 = 20;
    float pib2 = 5;
    int pontos2 = 20;
    float densidade2 = 20;
    float percapta2 = 20;
    float superpoder2 = 20;*/
    
    
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

    // Calculo densidade populacional e percapta carta 1

    densidade = populacao / area;
    percapta = pib / populacao;

    // Calculo superpoder carta 1

    superpoder = (populacao + area + pib + percapta + (float)pontos) - densidade;

    // Exibição dos Dados das Carta2:
    printf("\nObrigado pelo cadastro. Esses sao os dados da Carta 1:\n\n Estado: %s\n Codigo: %s\n Cidade: %s\n Populacao: %d\n Area: %.0f Km²\n PIB: %.2f Bilhoes de reais\n Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f \n Super Poder: %.0f Pontos", estado , codigo , cidade , populacao , area , pib , pontos , densidade , percapta, superpoder);
    
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

    // Calculo densidade populacional e percapta carta2
    densidade2 = populacao2 / area2;
    percapta2 = pib2 / populacao2;
    
    // Calculo superpoder carta 2

    superpoder2 = (populacao2 + area2 + pib2 + percapta2 + (float)pontos2) - densidade2;

    // Exibição dos Dados das Carta2:

    printf("\nObrigado pelo cadastro.Esses sao os dados da Carta 2:\n\n Estado: %s\n Codigo: %s\n Cidade: %s\n Populacao: %d\n Area: %.0f Km²\n PIB: %.2f Bilhoes de reais\n Pontos Turisticos: %d\n Densidade Populacional: %.3f hab/km²\n PIB per Capta: R$ %.2f \n Super Poder: %.0f Pontos", estado2 , codigo2 , cidade2 , populacao2 , area2 , pib2 , pontos2 , densidade2 , percapta2, superpoder2);
    
    
    // comparacao das cartas //
    printf("\n\nComparacao final entre as cartas.\nResultado 1 CARTA1 VENCE e Resultado 0 CARTA2 VENCE \n\n");
    
     printf("Resultado Populacao = %d\n",populacao > populacao2);
     printf("Resultado Área = %d\n",area > area2);
     printf("Resultado PIB = %d\n",pib > pib2);
     printf("Resultado PIB Per capta = %d\n",percapta > percapta2);
     printf("Resultado Densidade Populacional = %d\n",densidade < densidade2);
     printf("Resultado Pontos Turisticos = %d\n",pontos > pontos2);
     printf("Resultado Super Poder = %d\n",superpoder > superpoder2);
    

    return 0;
}

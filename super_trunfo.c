
//incluir biblioteca principal
#include <stdio.h>

//iniciar a função principal
int main () {
    // criando variáveis
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, pontoturistico1, pontoturistico2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpc1, pibpc2;

    //interagir com usuário, coletar informações da carta 1
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código do Estado: \n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite o nº da população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite o nº de pontos turísticos da cidade: \n");
    scanf(" %d", &pontoturistico1);

     
    //interagir com usuário, coletar informações da carta 2
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código do Estado: \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite o nº da população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o nº de pontos turísticos da cidade: \n");
    scanf(" %d", &pontoturistico2);

    //declarar variável densidade; usar casting para variável int; dividir populacao sobre area; 
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //declarar variável pib per capita; usar casting para variável int; dividir pib sobre populacao; 
    pibpc1 = pib1 / (float) populacao1;
    pibpc2 = pib2 / (float) populacao2;


    //imprimir na tela as informações prenchidas pelos usuários
    printf("\n CARTA_1 \n ESTADO: %c \n CÓDIGO: %s \n NOME DA CIDADE: %s \n POPULAÇÃO: %d \n", estado1, codigo1, cidade1, populacao1);
    printf(" ÁREA: %.2f km² \n PIB: %.2f bilhões de reais \n NÚMERO DE PONTOS TURÍSTICOS: %d \n", area1, pib1, pontoturistico1);
    printf(" DENSIDADE POPULACIONAL: %.2f hab/km² \n PIB PER CAPITA: %.2f reais\n", densidade1, pibpc1); 
    
    //imprimir na tela as informações prenchidas pelos usuários
    printf("\n CARTA_2 \n ESTADO: %c \n CODIGO: %s \n NOME DA CIDADE: %s \n POPULAÇÃO: %d \n", estado2, codigo2, cidade2, populacao2);
    printf(" ÁREA: %.2f km² \n PIB: %.2f bilhões de reais \n NÚMERO DE PONTOS TURíSTICOS: %d \n", area2, pib2, pontoturistico2);   
    printf(" DENSIDADE POPULACIONAL: %.2f hab/km² \n PIB PER CAPITA: %.2f reais\n", densidade2, pibpc2);
    
    //encerrar função principal
    return 0;
    }
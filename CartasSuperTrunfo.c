#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países \n");
    
    //Cadastro da Carta 1
    printf("Carta 1 \n");

    char Estado[40];
    char codigo[20];
    char cidade[30];
    int populacao, pontosturisticos;
    float area, pib;

    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado);

    printf("Digite o código do Estado: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    //Cadastro da Carta 2

    printf("Carta 2 \n");

    char Estado2[35], codigo2[15], cidade2[25];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o código do Estado: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // CÃ¡lculos
    densidadepopulacional = populacao / area;
    pibpercapta = pib / populacao;

    // Dados a Serem Exibidos
    printf("Carta 1\n");
    printf(" Estado: %s\n CÃ³digo da cidade: %s\n Nome da cidade: %s\n PopulaÃ§Ã£o: %d\n", estado, codigo, cidade, populacao);
    printf(" Ãrea: %.2f mÂ²\n PIB: R$%f\n Pontos turÃ­sticos: %d\n", area, pib, pontosturisticos);
    printf(" Densidade populacional: %f hab./kmÂ²\n Pib per capita: R$%.2f\n", densidadepopulacional, pibpercapta);

    printf("Carta 2\n");
    printf("Informe o estado:\n");
    scanf("%s", &estado);

    printf("Informe o cÃ³digo da cidade:\n");
    scanf("%s", &codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Informe a populaÃ§Ã£o:\n");
    scanf("%d", &populacao);

    printf("Informe a Ã¡rea:\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe os nÃºmeros pontos de turÃ­sticos:\n");
    scanf("%d", &pontosturisticos);

    // CÃ¡lculos
    densidadepopulacional = populacao / area;
    pibpercapta = pib / populacao;
    
    // Dados a Serem Exibidos
    printf("Carta 2\n");
    printf(" Estado: %s\n CÃ³digo da cidade: %s\n Nome da cidade: %s\n PopulaÃ§Ã£o: %d\n", estado, codigo, cidade, populacao);
    printf(" Ãrea: %.2f mÂ²\n PIB: R$%f\n Pontos turÃ­sticos: %d\n", area, pib, pontosturisticos);
    printf(" Densidade populacional: %f hab./kmÂ²\n Pib per capita: R$%.2f\n", densidadepopulacional, pibpercapta);

    return 0;
}
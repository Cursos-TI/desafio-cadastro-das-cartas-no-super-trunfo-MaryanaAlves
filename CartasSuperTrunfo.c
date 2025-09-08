#include <stdio.h>

int main (){
    // estado = letra de A à H; codigo = estado + nª de 01 à 04 (ex: A03); cidade = nome da cidade; populacao = nº de habitantes; pontos = nº de pontos turísticos; area = em km²; pib = produto interno bruto; densidade = populacao/area; pib_percapita = pib/populacao; super_poder=soma dos valores(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    char *vencedor[2]={"Carta 1", "Carta 2"};

    char estado1, carta1;
    char codigo1[4], cidade1[40];
    unsigned long int populacao1;
    int pontos1, area1;
    float pib1, densidade1, pib_percapita1, super_poder1;

    char estado2, carta2;
    char codigo2[4], cidade2[40];
    unsigned long int populacao2;
    int pontos2, area2;
    float pib2, densidade2, pib_percapita2, super_poder2;

    printf("*** Cadastro de cartas SuperTrunfo ***\n\n");

    //entrada de dados carta 1
    printf("Insira as informações da carta 1 ->\n\n");

    printf("Digite o estado da carta (de 'A' à 'H'): ");
    scanf(" %c",&estado1);

    printf("\nDigite o código da carta (estado[A-H] + 01 à 04. ex:A02): ");
    scanf("%s", codigo1);

    printf("\nDigite o nome da cidade (ex:RioDeJaneiro): ");
    scanf("%s", cidade1);

    printf("\nDigite o número de habitates da cidade (ex:400000): ");
    scanf("%lu",&populacao1);

    printf("\nDigite a área da cidade (em km² ex:300000): ");
    scanf("%d",&area1);

    printf("\nDigite o PIB (Produto Interno Bruto) da cidade (ex: 2500000): ");
    scanf("%f",&pib1);

    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf("%d",&pontos1);

    densidade1=(float)populacao1/area1;

    pib_percapita1=(float)pib1/populacao1;

    super_poder1=(float)populacao1+area1+pib1+pontos1+pib_percapita1+(1/densidade1);

    //entrada de dados carta 2
    printf("\n\nInsira as informações da carta 2 ->\n\n");

    printf("Digite o estado (de 'A' à 'H'): ");
    scanf(" %c",&estado2);

    printf("\nDigite o código da carta (estado[A-H] + 01 à 04. ex:A02): ");
    scanf("%s", codigo2);

    printf("\nDigite o nome da cidade (ex:RioDeJaneiro): ");
    scanf("%s", cidade2);

    printf("\nDigite o número de habitates da cidade (ex:400000): ");
    scanf("%lu",&populacao2);

    printf("\nDigite a área da cidade (em km² ex:300000): ");
    scanf("%d",&area2);

    printf("\nDigite o PIB (Produto Interno Bruto) da cidade (ex: 2500000): ");
    scanf("%f",&pib2);

    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf("%d",&pontos2);

    densidade2=(float)populacao2/area2;

    pib_percapita2=(float)pib2/populacao2;

    super_poder2=(float)populacao2+area2+pib2+pontos2+pib_percapita2+(1/densidade2);

    //saida de dados carta 1 e 2
    printf("\n\nCarta 1:\n");
    printf("Estado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %lu",populacao1);
    printf("\nÁrea: %d km²", area1);
    printf("\nPIB: R$%.2f", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos1);
    printf("\nDensidade Demográfica: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: R$%.2f", pib_percapita1);

    printf("\n\nCarta 2:\n");
    printf("Estado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %lu",populacao2);
    printf("\nÁrea: %d km²", area2);
    printf("\nPIB: R$%.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos2);
    printf("\nDensidade Demográfica: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: R$%.2f", pib_percapita2);

    //nova saida com comparação
    printf("\n\nComparação de Cartas:\n");
    printf("População: %s venceu(%d)\n", vencedor[populacao1>populacao2], populacao1>populacao2);
    printf("Área: %s venceu(%d)\n", vencedor[area1>area2], area1>area2);
    printf("PIB: %s venceu(%d)\n", vencedor[pib1>pib2], pib1>pib2);
    printf("Pontos Turísticos: %s venceu(%d)\n", vencedor[pontos1>pontos2], pontos1>pontos2);
    printf("Densidade Populacional: %s venceu(%d)\n", vencedor[densidade1<densidade2], densidade1<densidade2);
    printf("PIB per Capita: %s venceu(%d)\n", vencedor[pib_percapita1>pib_percapita2], pib_percapita1>pib_percapita2);
    printf("Super Poder: %s venceu(%d)\n", vencedor[super_poder1>super_poder2], super_poder1>super_poder2);

    return 0;
}

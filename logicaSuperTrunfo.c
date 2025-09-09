#include <stdio.h>

int main ()
{
    // Tema 3 -> Desafio III - Nível Mestre

    // Variáveis declaradas
    char estado1, estado2;
    char cod1_carta[10], cod2_carta[10];
    char cidade1[20], cidade2[20];
    float populacao1, populacao2; 
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turis1, pontos_turis2;
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // CARTA 1
    printf(" *** CARTA 01 ***\n");
    printf("Digite a letra do seu estado (de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (de 1 a 4): ");
    scanf("%s", cod1_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB (produto interno bruto) da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turis1);
    printf("\n");

    float densidade_populacional1 = populacao1 / area1;
    float PIBcapita1 = PIB1 / populacao1;

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: A0%s\n", cod1_carta);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.3f habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$%.4f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos_turis1);
    printf("Densidade Populacional: %.7f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: R$%.7f\n", PIBcapita1);
    printf("\n");

    // CARTA 2
    printf(" *** CARTA 02 ***\n");
    printf("Digite a letra do seu estado (de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (de 1 a 4): ");
    scanf("%s", cod2_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB (produto interno bruto) da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turis2);
    printf("\n");

    float densidade_populacional2 = populacao2 / area2;
    float PIBcapita2 = PIB2 / populacao2;

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: A0%s\n", cod2_carta);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.3f habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$%.4f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos_turis2);
    printf("Densidade Populacional: %.7f habitantes/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$%.7f\n", PIBcapita2);
    printf("\n");

    // Menu para escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade Pupulacional\n6 - PIB per Capita\n");
    scanf("%d", &atributo1);

    // Menu para o segundo atributo de forma dinâmica
    printf("Escolha o segundo atributo para comparar:\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Populacional\n");
    if (atributo1 != 6) printf("6 - PIB per Capita\n");
    scanf("%d", &atributo2);

    // Função para obter os valores de forma simples
    float get_valor(int atributo, int carta) {
    if (atributo == 1) return carta == 1 ? populacao1 : populacao2;
    if (atributo == 2) return carta == 1 ? area1 : area2;
    if (atributo == 3) return carta == 1 ? PIB1 : PIB2;
    if (atributo == 4) return carta == 1 ? pontos_turis1 : pontos_turis2;
    if (atributo == 5) return carta == 1 ? densidade_populacional1 : densidade_populacional2;
    if (atributo == 6) return carta == 1 ? PIBcapita1 : PIBcapita2;
    }

    // Obtendo os valores
    valor1_carta1 = get_valor(atributo1, 1);
    valor1_carta2 = get_valor(atributo1, 2);
    valor2_carta1 = get_valor(atributo2, 1);
    valor2_carta2 = get_valor(atributo2, 2);

    // Exibir nomes das cidades
    printf("\n### COMPARAÇÃO ###\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    // Exibindo os atributos escolhidos
    printf("Atributo 1: %d | Carta 1: %.2f | Carta 2: %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    if (atributo1 == 5) {
    if (valor1_carta1 < valor1_carta2) printf("Carta 1 vence no atributo 1!\n");
    else if (valor1_carta1 > valor1_carta2) printf("Carta 2 vence no atributo 1!\n");
    else printf("Empate no atributo 1!\n");
    } else {
    if (valor1_carta1 > valor1_carta2) printf("Carta 1 vence no atributo 1!\n");
    else if (valor1_carta1 < valor1_carta2) printf("Carta 2 vence no atributo 1!\n");
    else printf("Empate no atributo 1!\n");
    }

    printf("Atributo 2: %d | Carta 1: %.2f | Carta 2: %.2f\n", atributo2, valor2_carta1, valor2_carta2);
    if (atributo2 == 5) {
    if (valor2_carta1 < valor2_carta2) printf("Carta 1 vence no atributo 2!\n");
    else if (valor2_carta1 > valor2_carta2) printf("Carta 2 vence no atributo 2!\n");
    else printf("Empate no atributo 2!\n");
    } else {
    if (valor2_carta1 > valor2_carta2) printf("Carta 1 vence no atributo 2!\n");
    else if (valor2_carta1 < valor2_carta2) printf("Carta 2 vence no atributo 2!\n");
    else printf("Empate no atributo 2!\n");
    }

    // Somando os atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    return 0;
}

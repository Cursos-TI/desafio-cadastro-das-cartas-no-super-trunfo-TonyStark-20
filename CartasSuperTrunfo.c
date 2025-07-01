#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Cadastro das Cartas 

    char estado;
    char codigo[5];
    char nome[50];
    unsigned long int populacao;
    float pib;
    float area;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
    float SuperPoder;

    
    printf("Cadastro da Carta1:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;
    SuperPoder = populacao + area + pib + pontosturisticos + pibpercapita / densidadepopulacional;
    
    printf("\n");

    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned long int populacao2;
    float pib2;
    float area2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float SuperPoder2;
    
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: C01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 / densidadepopulacional2;

    printf("\nCarta 1:\n");
    printf("Estado %c\n", estado);
    printf("Código %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    //Exibição do cadastro linha por linha

    printf("\n");

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional < densidadepopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder > SuperPoder2);
   
    //Comparação das cartas de cada atributo - 1 ( Venceu ), 0 ( Perdeu )


    return 0;
}

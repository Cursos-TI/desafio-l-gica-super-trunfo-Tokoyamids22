#include <stdio.h>

int main (){
    // Carta 1
    char estado1[20], codigo1[10], nome1[30];
    unsigned long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, capita1, super1;

    // Carta 2
    char estado2[20], codigo2[10], nome2[30];
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, capita2, super2;

    // --------- CARTA 1 ---------
    printf("=== Bem vindo ao Super Trunfo de Países! ===\n");
    printf("\n=== Criando a Primeira Carta ===\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área por km² da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos1);
     
    densidade1 = populacao1 / area1;         
    capita1 = pib1 / populacao1;    
    super1 = populacao1 + area1 + pib1 + pontos1 + capita1 - densidade1;   

    // --------- CARTA 2 ---------
    printf("\n=== Criando a Segunda Carta ===\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área por km² da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + capita2 - densidade2;   

    // --------- RESULTADO FINAL ---------
    printf("\n================ RESULTADO FINAL! ================\n");

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", capita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", capita2);
    printf("Super Poder: %.2f\n", super2);

    // --------- COMPARAÇÃO ---------
    printf("\n================ COMPARAÇÃO DE CARTAS! ================\n");
    
    printf("População: ");
    if (populacao1 > populacao2)
    {
        printf("Carta 1 venceu! \n");
    } else {
        printf("Carta 2 venceu! \n");
    }
    
    /*printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf("PIB per Capita: %d\n", capita1 > capita2);
    printf("Super Poder: %d\n", super1 > super2);*/

    return 0;
}

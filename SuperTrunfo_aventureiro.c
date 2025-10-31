#include <stdio.h>

int main (){
    // Carta 1
    char estado1[20], codigo1[10], nome1[30];
    unsigned long int populacao1;
    int pontos1, escolhacarta;
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

int atributo1, atributo2;
float valor1_a1, valor2_a1, valor1_a2, valor2_a2;
float soma1, soma2;

// MENU 1
printf("Escolha o primeiro atributo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo1);

// Primeiro atributo
if (atributo1 == 1) {
    printf("Primeiro atributo escolhido: População\n");
    valor1_a1 = populacao1;
    valor2_a1 = populacao2;
}
else if (atributo1 == 2) {
    printf("Primeiro atributo escolhido: Área\n");
    valor1_a1 = area1;
    valor2_a1 = area2;
}
else if (atributo1 == 3) {
    printf("Primeiro atributo escolhido: PIB\n");
    valor1_a1 = pib1;
    valor2_a1 = pib2;
}
else if (atributo1 == 4) {
    printf("Primeiro atributo escolhido: Pontos Turísticos\n");
    valor1_a1 = pontos1;
    valor2_a1 = pontos2;
}
else if (atributo1 == 5) {
    printf("Primeiro atributo escolhido: Densidade Demográfica\n");
    valor1_a1 = densidade1;
    valor2_a1 = densidade2;
}
else {
    printf("Opção inválida!\n");
    return 0;
}

// MENU 2 (não pode repetir o primeiro)
printf("\nEscolha o segundo atributo (não pode repetir):\n");
if (atributo1 != 1) printf("1. População\n");
if (atributo1 != 2) printf("2. Área\n");
if (atributo1 != 3) printf("3. PIB\n");
if (atributo1 != 4) printf("4. Pontos Turísticos\n");
if (atributo1 != 5) printf("5. Densidade Demográfica\n");
scanf("%d", &atributo2);


if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
    printf("Opção inválida!\n");
    return 0;
}

// Segundo atributo
if (atributo2 == 1) {
    printf("Segundo atributo escolhido: População\n");
    valor1_a2 = populacao1;
    valor2_a2 = populacao2;
}
else if (atributo2 == 2) {
    printf("Segundo atributo escolhido: Área\n");
    valor1_a2 = area1;
    valor2_a2 = area2;
}
else if (atributo2 == 3) {
    printf("Segundo atributo escolhido: PIB\n");
    valor1_a2 = pib1;
    valor2_a2 = pib2;
}
else if (atributo2 == 4) {
    printf("Segundo atributo escolhido: Pontos Turísticos\n");
    valor1_a2 = pontos1;
    valor2_a2 = pontos2;
}
else if (atributo2 == 5) {
    printf("Segundo atributo escolhido: Densidade Demográfica\n");
    valor1_a2 = densidade1;
    valor2_a2 = densidade2;
}

printf("\n========== VALORES ==========\n");
printf("%s - Atributo1: %.2f | Atributo2: %.2f\n", nome1, valor1_a1, valor1_a2);
printf("%s - Atributo1: %.2f | Atributo2: %.2f\n", nome2, valor2_a1, valor2_a2);


float score1 = 0, score2 = 0;

// Atributo 1
if (atributo1 == 5) {
    if (valor1_a1 < valor2_a1) score1++;
    else if (valor2_a1 < valor1_a1) score2++;
} else {
    if (valor1_a1 > valor2_a1) score1++;
    else if (valor2_a1 > valor1_a1) score2++;
}

// Atributo 2
if (atributo2 == 5) {
    if (valor1_a2 < valor2_a2) score1++;
    else if (valor2_a2 < valor1_a2) score2++;
} else {
    if (valor1_a2 > valor2_a2) score1++;
    else if (valor2_a2 > valor1_a2) score2++;
}


soma1 = valor1_a1 + valor1_a2;
soma2 = valor2_a1 + valor2_a2;

printf("\n========== SOMA DOS ATRIBUTOS ==========\n");
printf("%s: %.2f\n", nome1, soma1);
printf("%s: %.2f\n", nome2, soma2);


printf("\n========== RESULTADO ==========\n");

if (soma1 > soma2) printf("%s venceu pela soma dos atributos!\n", nome1);
else if (soma2 > soma1) printf("%s venceu pela soma dos atributos!\n", nome2);
else printf("Empate!\n");

return 0;

}
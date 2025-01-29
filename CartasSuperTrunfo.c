#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
    int populacao;
    float area;
    int pib;
    int n_pontos_turisticos;
    float D_populacional;
    float pib_p_capita;
    float super_poder;
} Carta;

void calcularPropriedades(Carta *carta) {
    carta->D_populacional = carta->populacao / carta->area;
    carta->pib_p_capita = (float)carta->pib / carta->populacao;
    // Super Poder: soma das propriedades
    carta->super_poder = carta->D_populacional + carta->area + carta->pib + carta->n_pontos_turisticos;
}

void compararCartas(Carta carta1, Carta carta2) {
    printf("Comparando as cartas:\n");

    // Comparação de Densidade Populacional (menor valor vence)
    printf("\nDensidade Populacional:\n");
    if (carta1.D_populacional < carta2.D_populacional) {
        printf("Carta 1 vence com Densidade Populacional: %.2f\n", carta1.D_populacional);
    } else if (carta1.D_populacional > carta2.D_populacional) {
        printf("Carta 2 vence com Densidade Populacional: %.2f\n", carta2.D_populacional);
    } else {
        printf("Densidade Populacional é igual: %.2f\n", carta1.D_populacional);
    }

    // Comparação de PIB (maior valor vence)
    printf("\nPIB:\n");
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 vence com PIB: %d\n", carta1.pib);
    } else if (carta1.pib < carta2.pib) {
        printf("Carta 2 vence com PIB: %d\n", carta2.pib);
    } else {
        printf("PIB é igual: %d\n", carta1.pib);
    }

    // Comparação de Área (maior valor vence)
    printf("\nÁrea:\n");
    if (carta1.area > carta2.area) {
        printf("Carta 1 vence com Área: %.2f\n", carta1.area);
    } else if (carta1.area < carta2.area) {
        printf("Carta 2 vence com Área: %.2f\n", carta2.area);
    } else {
        printf("Área é igual: %.2f\n", carta1.area);
    }

    // Comparação de Número de Pontos Turísticos (maior valor vence)
    printf("\nNúmero de Pontos Turísticos:\n");
    if (carta1.n_pontos_turisticos > carta2.n_pontos_turisticos) {
        printf("Carta 1 vence com Pontos Turísticos: %d\n", carta1.n_pontos_turisticos);
    } else if (carta1.n_pontos_turisticos < carta2.n_pontos_turisticos) {
        printf("Carta 2 vence com Pontos Turísticos: %d\n", carta2.n_pontos_turisticos);
    } else {
        printf("Número de Pontos Turísticos é igual: %d\n", carta1.n_pontos_turisticos);
    }

    // Comparação do Super Poder (maior valor vence)
    printf("\nSuper Poder:\n");
    if (carta1.super_poder > carta2.super_poder) {
        printf("Carta 1 vence com Super Poder: %.2f\n", carta1.super_poder);
    } else if (carta1.super_poder < carta2.super_poder) {
        printf("Carta 2 vence com Super Poder: %.2f\n", carta2.super_poder);
    } else {
        printf("Super Poder é igual: %.2f\n", carta1.super_poder);
    }
}

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a Carta 1
    printf("Entre aqui com os dados para a Carta 1:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%d", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.n_pontos_turisticos);
    calcularPropriedades(&carta1);

    // Entrada de dados para a Carta 2
    printf("\nEntre aqui com os dados para a Carta 2:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%d", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.n_pontos_turisticos);
    calcularPropriedades(&carta2);

    // Comparação das cartas
    compararCartas(carta1, carta2);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

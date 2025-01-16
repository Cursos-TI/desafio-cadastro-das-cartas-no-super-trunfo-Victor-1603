#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    int populacao;
    float area;
    int pib;
    int n_pontos_turisticos;


    printf("Entre aqui com a populacao da cidade\n");
    scanf("%d", &populacao);
    printf("Entre aqui com a area da cidade\n");
    scanf("%f", &area);
    printf("Entre aqui com o pib da cidade\n");
    scanf("%d", &pib);
    printf("Entre aqui com o numero de pontos turisticos da cidade\n");
    scanf("%d", &n_pontos_turisticos);


    printf("Populacao total: %d\n", populacao);
    printf("Área total: %.2f\n", area);
    printf("Pib da cidade: %d\n", pib);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos);
    
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

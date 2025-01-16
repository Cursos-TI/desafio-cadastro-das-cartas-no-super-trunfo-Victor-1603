#include <stdio.h>

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
    
    return 0;
}

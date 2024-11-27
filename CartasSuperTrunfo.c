#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Defina variáveis separadas para cada atributo da cidade
    char Estado;
    char CodigoDaCarta[4]; 
    char NomeDaCidade[31]; 
    int Populacao;
    float AreaEmKmQuadrado;
    float PIB;
    int NumeroDePontosTuristicos;

    // Utilize a função scanf para capturar as entradas do usuário para cada atributo
    printf("Entre com a primeira letra do seu estado:\n");
    scanf(" %c", &Estado); 

    printf("Entre com o código da carta sendo ele a inicial do estado e um número de 1 a 4:\n");
    scanf("%3s", CodigoDaCarta);

    printf("Entre com o nome da cidade:\n");
    scanf("%30s", NomeDaCidade);

    printf("Entre com o número da população:\n");
    scanf("%d", &Populacao);

    printf("Entre com o território em Km²:\n");
    scanf("%12f", &AreaEmKmQuadrado);

    printf("Entre com o PIB:\n");
    scanf("%f", &PIB);

    printf("Entre com o número de pontos turísticos:\n");
    scanf(" %d", &NumeroDePontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área em Km²: %.2f\n", AreaEmKmQuadrado);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", NumeroDePontosTuristicos);

    // Exiba os valores inseridos para cada atributo da cidade, um por linha

    printf("\n--Atributos da cidade--\n");
    printf("Nome da cidade:%31s\n", NomeDaCidade);
    printf("A população é:%d\n",Populacao);
    printf("Área em Km² é:%2f\n",AreaEmKmQuadrado);
    printf("O PIB é de:%2f\n",PIB);
    printf("Número de pontos turistícos é:%d", NumeroDePontosTuristicos);

    return 0;
}

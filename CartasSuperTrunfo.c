#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    char Estado;
    char Código_da_carta [3];
    char Nome_da_cidade [50];
    int População;
    float Área_em_Km²;
    float PIB;
    int Números_de_pontos_turisticos;

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printef("Entre com a primeira letra do seu estado:\n");
    scanf(Estado);
    
    printf("Entre com o códico da carta sendo ele a inicia do estado e um número de 1 a 4:\n");
    scanf(Código_da_carta [3]);

    printf("Entre com o nome da cidade:");
    scanf(Nome_da_cidade [50]);

    printf("Entre com o numera da população:\n");
    scanf(População);

    printf("Entre com o teritorio em Km²: \n");
    scanf(Área_em_Km²);

    printf("Entre com o PIB:\n");
    scanf(PIB);

    printf

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Defina variáveis separadas para cada atributo da cidade
    char Estado;
    char Código_da_carta[5]; // +1 para o caractere nulo '\0'
    char Nome_da_cidade[52]; // +1 para o caractere nulo '\0'
    int População;
    float Área_em_Km²;
    float PIB;
    int Números_de_pontos_turistícos;

    // Utilize a função scanf para capturar as entradas do usuário para cada atributo
    printf("Entre com a primeira letra do seu estado:\n");
    scanf(" %c", &Estado); 

    printf("Entre com o código da carta sendo ele a inicial do estado e um número de 1 a 4:\n");
    scanf("%4s", Código_da_carta);

    printf("Entre com o nome da cidade:\n");
    scanf("%51s", Nome_da_cidade);

    printf("Entre com o número da população:\n");
    scanf("%d", &População);

    printf("Entre com o território em Km²: \n");
    scanf("%f", &Área_em_Km²);

    printf("Entre com o PIB:\n");
    scanf("%f", &PIB);

    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &Números_de_pontos_turistícos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha
    

    return 0;
}

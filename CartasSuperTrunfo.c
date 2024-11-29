#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char nome[20] = "São Paulo (A)";
    int codigo = 01;
    int pontos = 15;
    float area = 174.8, populacao = 748.919, PIB = 40.812 ;
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    /*
    printf exibe a mensagem ao usuário
    scanf guarda o valor informado pelo usuário no formato desejado.
    sintaxe scanf ("%formato", &variavel)
    */


    printf ("Informe o código da cidade: ");
    scanf ("%d \n", &codigo);

    printf ("Informe o nome da cidade: ");
    scanf ("%s \n", &nome);

    printf("Informe o número de habitantes da cidade: ");
    scanf ("%f \n", &populacao);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

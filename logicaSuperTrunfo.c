#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular densidade e PIB per capita
void calcularDados(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
}

// Função para exibir dados
void exibirCarta(Carta c) {
    printf("\n--- %s (%s) ---\n", c.cidade, c.estado);
    printf("Código: %s\n", c.codigo);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n", c.pibPerCapita);
}

// Função para comparar os atributos com base na escolha
void compararCartas(Carta c1, Carta c2, int opcao) {
    printf("\n=== Comparação de cartas ===\n");
    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", c1.cidade, c1.populacao);
            printf("%s: %d\n", c2.cidade, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.populacao > c1.populacao)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", c1.cidade, c1.area);
            printf("%s: %.2f km²\n", c2.cidade, c2.area);
            if (c1.area > c2.area)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.area > c1.area)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f\n", c1.cidade, c1.pib);
            printf("%s: R$ %.2f\n", c2.cidade, c2.pib);
            if (c1.pib > c2.pib)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.pib > c1.pib)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Densidade Populacional (menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", c1.cidade, c1.densidadePopulacional);
            printf("%s: %.2f hab/km²\n", c2.cidade, c2.densidadePopulacional);
            if (c1.densidadePopulacional < c2.densidadePopulacional)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.densidadePopulacional < c1.densidadePopulacional)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("%s: R$ %.2f\n", c1.cidade, c1.pibPerCapita);
            printf("%s: R$ %.2f\n", c2.cidade, c2.pibPerCapita);
            if (c1.pibPerCapita > c2.pibPerCapita)
                printf("Resultado: %s venceu!\n", c1.cidade);
            else if (c2.pibPerCapita > c1.pibPerCapita)
                printf("Resultado: %s venceu!\n", c2.cidade);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    // Cadastro com dados reais
    Carta carta1 = {"RJ", "C003", "Cordeiro", 22026, 116.5, 700000000.0, 7};
    Carta carta2 = {"RJ", "C004", "Nova Friburgo", 191664, 933.5, 6000000000.0, 15};

    // Calcular valores derivados
    calcularDados(&carta1);
    calcularDados(&carta2);

    // Exibir cartas
    printf("=== Cartas Cadastradas ===");
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Menu de comparação
    int escolha;
    printf("\n=== Menu de Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    compararCartas(carta1, carta2, escolha);

    return 0;
}

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

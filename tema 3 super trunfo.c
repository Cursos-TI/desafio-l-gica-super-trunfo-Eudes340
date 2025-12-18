#include <stdio.h>

int main() {

    /* =======================
       CARTAS PRÉ-CADASTRADAS
       ======================= */

    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int populacao1 = 214000000;
    int populacao2 = 46000000;

    float area1 = 8516000;
    float area2 = 2780000;

    float pib1 = 1900; // em bilhões
    float pib2 = 640;  // em bilhões

    int pontos1 = 30;
    int pontos2 = 25;

    /* =======================
       CÁLCULOS AUTOMÁTICOS
       ======================= */

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    /* =======================
       MENU – PRIMEIRO ATRIBUTO
       ======================= */

    printf("\n===== SUPER TRUNFO =====\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida! Encerrando o programa.\n");
            return 0;
    }

    /* =======================
       MENU DINÂMICO – SEGUNDO ATRIBUTO
       ======================= */

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Erro: nao e permitido escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    switch (opcao2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida! Encerrando o programa.\n");
            return 0;
    }

    /* =======================
       COMPARAÇÃO E SOMA
       ======================= */

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO =====\n");
    printf("%s -> Soma: %.2f\n", pais1, soma1);
    printf("%s -> Soma: %.2f\n", pais2, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", pais1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}
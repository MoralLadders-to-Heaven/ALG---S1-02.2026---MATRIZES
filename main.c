#include <stdio.h>
#include <stdlib.h>

//Apenas uma funcao para facilitar a impressao de ccabecalhos e afins
void cabecalho(int i) {

    if (i == 1) {
        printf("\n=========================================\n");
        printf("      QUESTAO 1 - SOMA DE MATRIZES (3x3)   \n");
        printf("=========================================\n");
        printf("Dica: Digite o valor e aperte Enter.\n\n");
    }
    if (i == 2) {
        printf("\n=========================================\n");
        printf("   QUESTAO 2 - MAIOR VALOR NA MATRIZ (4x4) \n");
        printf("=========================================\n");
        printf("Dica: Digite o valor e aperte Enter.\n\n");
    }
    if (i == 3) {
        printf("--- Preenchendo a Matriz A ---\n");
    }
    if (i == 4) {
        printf("--- Preenchendo a Matriz B ---\n");
    }
    if (i == 5) {
        printf("\n=========================================\n");
        printf("           TRABALHO DE MATRIZES          \n");
        printf("=========================================\n");
        printf("[1] Rodar Questao 1 (Soma 3x3)\n");
        printf("[2] Rodar Questao 2 (Maior Valor 4x4)\n");
        printf("[0] Sair do Programa\n");
        printf("-----------------------------------------\n");
        printf("Escolha uma opcao: ");
    }
    if (i == 6) {
        printf("--- Preenchendo a Matriz ---\n");
    }
    if (i == 7) {
        printf("\n=========================================\n");
        printf("      QUESTAO 1 - SOMA DE MATRIZES (3x3)   \n");
        printf("=========================================\n");
    }
    if (i == 8) {
        printf("\n=========================================\n");
        printf("   QUESTAO 2 - MAIOR VALOR NA MATRIZ (4x4) \n");
        printf("=========================================\n");
    }
}

/* =========================================================
 * FUNCAO: Questao 1 - Soma de Matrizes
 * ========================================================= */
void questao1() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    system("cls");
    cabecalho(1);
    /* Leitura da matriz A */
    cabecalho(3);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            system("cls");
            cabecalho(1);
            cabecalho(3);
        }
    }

    system("cls");
    cabecalho(1);
    /* Leitura da matriz B */
    cabecalho(4);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Valor de B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
            system("cls");
            cabecalho(1);
            cabecalho(4);
        }
    }

    /* Calculo da matriz C = A + B */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    /* Exibicao dos Resultados */
    system("cls");
    cabecalho(7);
    printf("\n============== RESULTADOS ==============\n");

    printf("\n[ Matriz A ]\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n[ Matriz B ]\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n[ Matriz C (A + B) ]\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n=========================================\n");
    system("pause");
    system("cls");
}

/* =========================================================
 * FUNCAO: Questao 2 - Maior Valor em uma Matriz
 * ========================================================= */
void questao2() {
    int M[4][4];
    int i, j;
    int maior, linha, coluna;

    system("cls");
    cabecalho(2);

    /* Leitura da matriz */
    cabecalho(6);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Valor de M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            system("cls");
            cabecalho(2);
            cabecalho(6);
        }
    }

    /* Inicializa o maior valor com o primeiro elemento */
    maior = M[0][0];
    linha = 0;
    coluna = 0;

    /* Percorre a matriz procurando o maior valor */
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    system("cls");
    cabecalho(8);
    /* Exibicao dos Resultados */
    printf("\n============== RESULTADOS ==============\n");

    printf("\n[ Matriz Informada ]\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n-> Maior valor encontrado: %d\n", maior);
    printf("-> Posicao exata: Linha %d, Coluna %d\n", linha, coluna);
    printf("\n=========================================\n");
    system("pause");
}

/* =========================================================
 * MENU PRINCIPAL
 * ========================================================= */
int main() {
    int opcao;

    do {
        cabecalho(5);
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                questao1();
                break;
            case 2:
                questao2();
                break;
            case 0:
                printf("\nEncerrando o programa. Ate logo!\n");
                break;
            default:
                printf("\n[!] Opcao invalida! Tente novamente.\n\n");
                system("pause");
        }       system("cls");
    } while (opcao != 0);

    return 0;
}

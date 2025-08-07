#include <stdio.h>

int main() {
    // Simulação do movimento da Torre usando for
    int casasTorre = 5;
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo usando while
    int casasBispo = 5;
    int j = 1;
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha usando do-while
    int casasRainha = 8;
    int k = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    // Fim do programa
    return 0;
}
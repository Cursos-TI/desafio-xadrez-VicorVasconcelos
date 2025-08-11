#include <stdio.h>

int main() {
    // Mensagem inicial
    printf("=========================================\n");
    printf("  🏰 Bem-vindo ao Simulador de Xadrez 🏰\n");
    printf("=========================================\n\n");

    // ---------------------------
    // Movimento da Torre (for)
    // ---------------------------
    int casasTorre = 5;
    int i;
    printf("➡️  Movimento da Torre (%d casas para a direita):\n", casasTorre);
    for (i = 1; i <= casasTorre; i++) {
        printf("   - Direita\n");
    }
    printf("\n");

    // ---------------------------
    // Movimento do Bispo (while)
    // ---------------------------
    int casasBispo = 5;
    int j = 1;
    printf("🔹 Movimento do Bispo (%d casas na diagonal para cima e direita):\n", casasBispo);
    while (j <= casasBispo) {
        printf("   - Cima, Direita\n");
        j++;
    }
    printf("\n");

    // ---------------------------
    // Movimento da Rainha (do-while)
    // ---------------------------
    int casasRainha = 8;
    int k = 1;
    printf("👑 Movimento da Rainha (%d casas para a esquerda):\n", casasRainha);
    do {
        printf("   - Esquerda\n");
        k++;
    } while (k <= casasRainha);
    printf("\n");

    // ---------------------------
    // Movimento do Cavalo (for + while)
    // ---------------------------
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("🐴 Movimento do Cavalo (%d casas para baixo e %d para a esquerda):\n", casasBaixo, casasEsquerda);

    for (int a = 0; a < casasBaixo; a++) {
        printf("   - Baixo\n");

        // Move para a esquerda apenas no final
        if (a == casasBaixo - 1) {
            int b = 0;
            while (b < casasEsquerda) {
                printf("   - Esquerda\n");
                b++;
            }
        }
    }

    printf("\n✅ Fim da simulação!\n");

    return 0;
}

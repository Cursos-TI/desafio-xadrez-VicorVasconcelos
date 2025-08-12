#include <stdio.h>

// --- Funções Recursivas ---

// Função recursiva para simular o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // Caso base da recursão
    }
    printf("   - Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) {
        return; // Caso base
    }
    printf("   - Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função recursiva para simular o movimento do Bispo com loops aninhados
void moverBispo(int casas) {
    if (casas <= 0) {
        return; // Caso base
    }

    // Loop externo para o movimento vertical
    for (int i = 0; i < 1; i++) {
        // Loop interno para o movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("   - Cima, Direita\n");
        }
    }
    moverBispo(casas - 1); // Chamada recursiva
}

// --- Função com Loops Aninhados e Controles de Fluxo para o Cavalo ---

// Função para simular o movimento do Cavalo
void moverCavalo() {
    int movimentoBaixo = 2; // Duas casas para baixo
    int movimentoEsquerda = 1; // Uma casa para a esquerda

    printf("🐴 Movimento do Cavalo (%d casas para baixo e %d para a esquerda):\n", movimentoBaixo, movimentoEsquerda);

    // Loop externo para o movimento vertical (Baixo)
    for (int i = 0; i < 3; i++) { // Loop de controle
        if (i < movimentoBaixo) {
            printf("   - Baixo\n");
            continue; // Continua para a próxima iteração
        }
        
        // Loop aninhado para o movimento horizontal (Esquerda)
        for (int j = 0; j < 2; j++) {
            if (j < movimentoEsquerda) {
                printf("   - Esquerda\n");
            } else {
                break; // Sai do loop interno após a primeira casa
            }
        }
        break; // Sai do loop externo para finalizar o movimento
    }
}


int main() {
    // Mensagem inicial
    printf("=========================================\n");
    printf("  🏰 Bem-vindo ao Simulador de Xadrez 🏰\n");
    printf("=========================================\n\n");

    // --- Movimento da Torre (Recursividade) ---
    int casasTorre = 5;
    printf("➡️  Movimento da Torre (%d casas para a direita):\n", casasTorre);
    moverTorre(casasTorre);
    printf("\n");

    // --- Movimento do Bispo (Recursividade com Loops Aninhados) ---
    int casasBispo = 5;
    printf("🔹 Movimento do Bispo (%d casas na diagonal para cima e direita):\n", casasBispo);
    moverBispo(casasBispo);
    printf("\n");

    // --- Movimento da Rainha (Recursividade) ---
    int casasRainha = 8;
    printf("👑 Movimento da Rainha (%d casas para a esquerda):\n", casasRainha);
    moverRainha(casasRainha);
    printf("\n");

    // --- Movimento do Cavalo (Loops Aninhados) ---
    moverCavalo();
    printf("\n");

    printf("✅ Fim da simulação!\n");

    return 0;
}
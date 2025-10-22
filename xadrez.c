#include <stdio.h>

// ===============================
// Funções Recursivas
// ===============================

// -------- TORRE (recursiva) --------
// Move-se em linha reta — exemplo: 5 casas para a direita.
void moverTorre(int passo, int total) {
    if (passo > total) return; // Caso base: fim da recursão
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva
}

// -------- BISPO (recursiva + loops aninhados) --------
// Move-se na diagonal — exemplo: 5 casas para cima e à direita.
void moverBispo(int passo, int total) {
    if (passo > total) return; // Caso base da recursão

    // Loops aninhados simulando os movimentos diagonais
    // (externo = vertical / interno = horizontal)
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(passo + 1, total); // chamada recursiva
}

// -------- RAINHA (recursiva) --------
// Move-se em todas as direções — exemplo: 8 casas para a esquerda.
void moverRainha(int passo, int total) {
    if (passo > total) return; // Caso base
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, total); // chamada recursiva
}

// -------- CAVALO (loops complexos) --------
// Move-se em “L”: duas casas para cima e uma para a direita.
void moverCavalo() {
    printf("=== Movimento do CAVALO ===\n");

    int movimentos = 3; // número de simulações
    for (int i = 1; i <= movimentos; i++) {
        // loop aninhado simulando as duas direções (vertical e horizontal)
        for (int vertical = 1; vertical <= 2; vertical++) {
            if (vertical == 2) {
                // quando atingir duas casas para cima, move para direita
                for (int horizontal = 1; horizontal <= 1; horizontal++) {
                    printf("Cima (%d)\n", vertical - 1);
                    printf("Cima (%d)\n", vertical);
                    printf("Direita (%d)\n", horizontal);
                }
                break; // sai do loop interno após completar o movimento em "L"
            } else {
                // movimento parcial — continua subindo
                continue; // volta ao loop até completar o movimento
            }
        }
    }
}

int main() {
    // ===============================
    // Simulação de Movimentos no Xadrez
    // Peças: Torre, Bispo, Rainha e Cavalo
    // ===============================

    // -------- TORRE --------
    printf("=== Movimento da TORRE ===\n");
    moverTorre(1, 5);

    printf("\n");

    // -------- BISPO --------
    printf("=== Movimento do BISPO ===\n");
    moverBispo(1, 5);

    printf("\n");

    // -------- RAINHA --------
    printf("=== Movimento da RAINHA ===\n");
    moverRainha(1, 8);

    printf("\n");

    // -------- CAVALO --------
    moverCavalo();

    printf("\nSimulação concluída!\n");
    return 0;
}

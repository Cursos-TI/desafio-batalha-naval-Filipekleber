#include <stdio.h>

int main(){

    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10] = {0};

    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int navio3[3] = {3,3,3};
    int navio4[3] = {3,3,3};

    int linha_1d = 1;
    int coluna_1d = 1;

    int linha_2d = 6;
    int coluna_2d = 7;


    int linha_h = 2;
    int coluna_h = 4;

    int linha_v = 5;
    int coluna_v = 7;

    for(int i = 0; i < 3; i++){
        tabuleiro[linha_1d + i][coluna_1d + i] = navio3[i];
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linha_2d + i][coluna_2d - i] = navio4[i];
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linha_h][coluna_h + i] = navio1[i];
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linha_v + i][coluna_h] = navio2[i];
    }

    printf("\n  TABULEIRO BATALHA NAVAL\n  ");

    for (int i = 0; i < 10; i++) {
        printf("%c ", letra[i]);
    }
    printf("\n");

    // Mostrar o tabuleiro com os números laterais
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Mostra 1 a 10 na lateral
        if (i + 1 < 10) printf(" "); // Ajustar espaço pros números de 1 dígito

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}

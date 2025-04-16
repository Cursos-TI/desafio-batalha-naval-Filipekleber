#include <stdio.h>

int main(){


// Matriz do tabuleiro
int tabuleiro[10][10] = {

    {0,0,0,0,0,0,0,0,0,0}, 
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
};



/// Vetores representando os navios
int navios01[3] = {3,3,3};
int navios02[3] = {3,3,3};


// Posição inicial do navio horizontal (Linha 2, coluna 4)
int linha_h = 2;
int coluna_h = 4;


// Posição inicial do navio vertical (Linha 5, coluna 7)
int linha_v = 5;
int coluna_v = 7;


// Posiciona navio horizontal
for(int i = 0; i < 3;i++){
    tabuleiro[linha_h][coluna_h + i] = navios01[i];
}


// Posiciona navio vertical
for(int i = 0; i < 3;i++){
    tabuleiro[linha_v + i][coluna_v] = navios02[i];
}



// Exibir o tabuleiro
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

    return 0;
}

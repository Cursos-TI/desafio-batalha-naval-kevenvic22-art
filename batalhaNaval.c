#include <stdio.h>

int main() {
    // Introdução ao Jogo
    printf(" SEJÁ BEM VINDO\n");
    printf(" Ao jogo de Batalha Naval\n");

    int i, j;
    int tabuleiro[10][10] = {0}; // Inicializa um tabuleiro 10x10 com zeros

    // Posicionamento dos navios
    // Navio 1 (horizontal) na linha 2, colunas F A H
    tabuleiro[1][5] = 3; // F2
    tabuleiro[1][6] = 3; // G2
    tabuleiro[1][7] = 3; // H2  

    // Navio 2 (vertical) na coluna D, linhas 5 A 7
    tabuleiro[4][3] = 3; // D5
    tabuleiro[5][3] = 3; // D6
    tabuleiro[6][3] = 3; // D7

    // Navio 3 (Dianonal) A1 B2 C3
   for (i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3; // A1, B2, C3
    }
    // Navio 4 (Diagonal) J10 I9 H8
    for (i = 0; i < 3; i++) {
        tabuleiro[9 - i][9 - i] = 3; // J10, I9, H8
    }

    // Habilidade em Cone = 5 
    tabuleiro[7][2] = 5; // C8
    for (size_t i = 0; i < 3; i++)
    {
     tabuleiro[8][1 + i] = 5; // B9, C9, D9
       for (size_t i = 0; i < 5; i++)
     {
     tabuleiro[9][0 + i] = 5 ; // A10, B10, C10, D10, E10
   }
     
}
    // Habilidade Cruz = 1
    for (size_t i = 0; i < 5; i++)
    {
        tabuleiro[2 + i][6] = 1; // G3, G4, G5, G6, G7
        tabuleiro[4][4+ i] = 1; // E5, F5, G5, H5, I5
    }
    

    
    // Habilidade Octaedro = 7
    for (i = 2; i < 5; i++) {
        tabuleiro[0 + i][1] = 7; // B3, B4, B5  
       for (size_t i = 0; i < 3; i++)
       {
        tabuleiro[3][0 + i] = 7; // A4, B4, C4
       }
       
    }

    // Cabeçalho das colunas a-j
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf(" %c", 'A' + j);
    }
    printf("\n");

    // Linhas com números 1-10.
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  // rótulo da linha (alinhado)
        //conteúdo do tabuleiro
        for (j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]); // valor da célula
        }
        printf("\n");
    }

    return 0;
}

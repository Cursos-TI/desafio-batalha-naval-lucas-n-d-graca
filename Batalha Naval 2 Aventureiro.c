#include <stdio.h>

// Comando que irá auxiliar na impressão do Tabuleiro
 #define LINHAS 10
 #define COLUNAS 11

// Uso de Recursividade para imprimir as coordenadas das Colunas
 void imprimirColunas(){
 int colunas;
 printf("  A B C D E F G H I J\n", colunas);// Letras Usadas para identificar as Colunas
    
 }
 int main(){
    
        
    int matriz [LINHAS] [COLUNAS];
    int soma = 0;// número usado para indicar ÁGUA
    int navios = 3; // número usado para indicar NAVIO
    imprimirColunas();{ // Recursividade

    // Loop Aninhado usado para gerar o tabuleiro no terminal
for (int i = 0; i < LINHAS; i++){
    for (int j = 0; j < COLUNAS; j++){
    soma;
    //Comando usado para preencher o tabuleiro de ÁGUA (indicada pelo número 0)
    matriz[i][j] = soma;

    //Comados usados para enumerar as linhas
    matriz[0][0] = 0;
    matriz[1][0] = 1;
    matriz[2][0] = 2;
    matriz[3][0] = 3;
    matriz[4][0] = 4;
    matriz[5][0] = 5;
    matriz[6][0] = 6;
    matriz[7][0] = 7;
    matriz[8][0] = 8;
    matriz[9][0] = 9;

    // Comando para imprimir os Navios no Tabuleiro
    
    matriz[2][3] = 3;// Navio 1: Diagonal
    matriz[3][4] = 3;// Navio 1: Diagonal
    matriz[4][5] = 3;// Navio 1: Diagonal

    matriz[9][8] = 3;// Navio 2: Diagonal
    matriz[8][9] = 3;// Navio 2: Diagonal
    matriz[7][10] = 3;//Navio 2: Diagonal

    matriz[4][2] = 3;// Navio 3: Vertical
    matriz[5][2] = 3;// Navio 3: vertical
    matriz[6][2] = 3;// Navio 3: vertical

    matriz[0][7] = 3;// Navio 3: Horizontal
    matriz[0][8] = 3;// Navio 3: Horizontal
    matriz[0][9] = 3;// Navio 3: Horizontal

    printf( "%d ",matriz[i][j]);
    

    }
    printf("\n");

    }
}

    return 0;
}
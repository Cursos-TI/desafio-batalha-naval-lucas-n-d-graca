#include <stdio.h>
int main(){

    //Declaração da Matriz

    char mapa[10][11];
    // Inicializando os Elementos da Matriz

    mapa [0][0]= ' ';
    mapa [0][1]= 'A';
    mapa [0][2]= 'B';
    mapa [0][3]= 'C';
    mapa [0][4]= 'D';
    mapa [0][5]= 'E';
    mapa [0][6]= 'F';
    mapa [0][7]= 'G';
    mapa [0][8]= 'H';
    mapa [0][9]= 'I';
    mapa [0][10]= 'J';

    mapa [1][0]= 48;
    mapa [2][0]= 49;
    mapa [3][0]= 50;
    mapa [4][0]= 51;
    mapa [5][0]= 52;
    mapa [6][0]= 53;
    mapa [7][0]= 54;
    mapa [8][0]= 55;
    mapa [9][0]= 56;
    mapa [10][0]= 57;

    mapa [1][1]= 48;
    mapa [2][1]= 48;
    mapa [3][1]= 48;
    mapa [4][1]= 48;
    mapa [5][1]= 48;
    mapa [6][1]= 48;
    mapa [7][1]= 48;
    mapa [8][1]= 48;
    mapa [9][1]= 48;
    mapa [10][1]= 48;

    mapa [1][2]= 48;
    mapa [2][2]= 128;// Navio (losango), Vertical
    mapa [3][2]= 128;// Navio (losango), Vertical
    mapa [4][2]= 128;// Navio (losango), Vertical
    mapa [5][2]= 48;
    mapa [6][2]= 48;
    mapa [7][2]= 48;
    mapa [8][2]= 48;
    mapa [9][2]= 48;
    mapa [10][2]= 48;

    mapa [1][3]= 48;
    mapa [2][3]= 48;
    mapa [3][3]= 48;
    mapa [4][3]= 48;
    mapa [5][3]= 48;
    mapa [6][3]= 48;
    mapa [7][3]= 48;
    mapa [8][3]= 48;
    mapa [9][3]= 48;
    mapa [10][3]= 48;

    mapa [1][4]= 48;
    mapa [2][4]= 48;
    mapa [3][4]= 48;
    mapa [4][4]= 48;
    mapa [5][4]= 48;
    mapa [6][4]= 48;
    mapa [7][4]= 128;// Navio (losango), HORINZONTAL
    mapa [8][4]= 48;
    mapa [9][4]= 48;
    mapa [10][4]= 48;

    mapa [1][5]= 48;
    mapa [2][5]= 48;
    mapa [3][5]= 48;
    mapa [4][5]= 48;
    mapa [5][5]= 48;
    mapa [6][5]= 48;
    mapa [7][5]= 128;// Navio (losango), HORINZONTAL
    mapa [8][5]= 48;
    mapa [9][5]= 48;
    mapa [10][5]= 48;

    mapa [1][6]= 48;
    mapa [2][6]= 48;
    mapa [3][6]= 48;
    mapa [4][6]= 48;
    mapa [5][6]= 48;
    mapa [6][6]= 48;
    mapa [7][6]= 128;// Navio (losango), HORINZONTAL
    mapa [8][6]= 48;
    mapa [9][6]= 48;
    mapa [10][6]= 48;

    mapa [1][7]= 48;
    mapa [2][7]= 48;
    mapa [3][7]= 48;
    mapa [4][7]= 48;
    mapa [5][7]= 48;
    mapa [6][7]= 48;
    mapa [7][7]= 48;
    mapa [8][7]= 48;
    mapa [9][7]= 48;
    mapa [10][7]= 48;

    mapa [1][8]= 48;
    mapa [2][8]= 48;
    mapa [3][8]= 48;
    mapa [4][8]= 48;
    mapa [5][8]= 48;
    mapa [6][8]= 48;
    mapa [7][8]= 48;
    mapa [8][8]= 48;
    mapa [9][8]= 48;
    mapa [10][8]= 48;

    mapa [1][9]= 48;
    mapa [2][9]= 48;
    mapa [3][9]= 48;
    mapa [4][9]= 48;
    mapa [5][9]= 48;
    mapa [6][9]= 48;
    mapa [7][9]= 48;
    mapa [8][9]= 48;
    mapa [9][9]= 48;
    mapa [10][9]= 48;

    mapa [1][10]= 48;
    mapa [2][10]= 48;
    mapa [3][10]= 48;
    mapa [4][10]= 48;
    mapa [5][10]= 48;
    mapa [6][10]= 48;
    mapa [7][10]= 48;
    mapa [8][10]= 48;
    mapa [9][10]= 48;
    mapa [10][10]= 48;

    for (int x = 0; x < 11; x++)
    {
        for (int y = 0; y < 11; y++)
        {
            printf (" %c ", mapa [x][y]);
        }
        printf(" \n");
    }
   
}
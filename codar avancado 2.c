#include <stdio.h>
#define LINHA 10
#define COLUNA  10

int main(){
    int matriz[LINHA][COLUNA];
    
    int alvo = 3 ;
    int soma = 0;
    
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
        matriz[i][j] = soma;
        printf(" %d ", matriz[i][j]);
        
        printf("\n");
        do{
        matriz[3][2] = 5 ;
        } while (matriz[i][j]);
    }
    }
    return 0;
}
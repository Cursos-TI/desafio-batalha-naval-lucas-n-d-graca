#include <stdio.h>

    // Uso de Recursividade para criar o Tabuleiro

void mostraTabuleiro(int tabuleiro[][10])
{

    int linha, coluna;

        // Imprime as Letras que irão designar as Colunas

        printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ");
        printf("\n");

        // Loop para gerar e imprimir as Linhas do Tabuleiro

        for(int linha = 0 ; linha < 10 ; linha++ ){
            printf("%d",linha + 1);

            // Loop para gerar as casas do Tabuleiro
            // 0 (zero) é usado para representar ÁGUA

            for(int coluna = 0 ; coluna < 10 ; coluna++ ){
                if(tabuleiro[linha][coluna]==-1){
                    printf("\t1");
                }else {
                    printf("\t0");
               
                }

            }
            printf("\n");
        }

        
}
    int main() {
        int tabuleiro[10][10];
        
        mostraTabuleiro(tabuleiro);

        printf("\n");
    
        return 0;
    }
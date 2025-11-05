#include <stdio.h>
/*
Array uni-dimensional(vetores)
[0] [1] [2] [3] [4]  ... [n]
  |    |    |    |    |
  |    |    |    |    +--> Elemento n
  |    |    |    +-------> Elemento 3
  |    |    +------------> Elemento 2
  |    +-----------------> Elemento 1
  +----------------------> Elemento 0

Array mult-dimensional (matrizes) int numeros[5][5] (Linhas e colunas)
[0][1][2][3][4]  ... [n]
  |  |  |  |  |        |
  |  |  |  |  |        +--> Elemento n da coluna
  |  |  |  |  +----------> Elemento 3 da coluna
  |  |  |  +--------------> Elemento 2 da coluna
  |  |  +------------------> Elemento 1 da coluna
  |  +---------------------> Elemento 0 da coluna
  +-------------------------> Linha 0
*/

int main(){
    //Declaração de uma matriz 3x3
    int matriz[3][3];

    //Atribuindo valores à matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    //Imprimindo valores da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
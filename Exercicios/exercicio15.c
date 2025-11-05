#include <stdio.h>
/*
Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor
e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main(){

int numero[6]; //0 a 5

//Letra A:
numero[0] = 1;
numero[1] = 0;
numero[2] = 5;
numero[3] = -2;
numero[4] = -5;
numero[5] = 7;

//Letra B:
int soma = numero[0] + numero[1] + numero[5];
printf("Soma das posicoes A[0], A[1] e A[5]: %d\n", soma);

//Letra C:
numero[4] = 100;

//Letra D:
printf("Valores do vetor A:\n");
for(int i = 0; i <6; i++){
    printf("%i\n", numero[i]);
}

return 0;
}
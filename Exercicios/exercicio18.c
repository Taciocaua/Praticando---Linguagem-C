/*Faça um programa que tenha uma função que receba 
um vetor de inteiros como parâmetro e retorne o
maior valor.*/

int valor_maior(int vetor[], int qtd){
    int maior = 0;
    
    for(int i = 0; i < qtd; i++){
        if (i == 0){
            maior = vetor[i];
        }
        
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

#include <stdio.h>
int main(){

int vetor[5] = {7, 347, 423, 56, 5};

int maior = valor_maior(vetor, 5);

printf("O maior valor do vetor é %i", maior);

return 0;
}
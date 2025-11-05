/*Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos */

#include <stdio.h>

int main(){
    int vetor[10];
    
    //Entrada de dados ↓ 
    for(int i = 0; i < 10; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &vetor[i]);
    }

    //Processamento ↓ 
    for(int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    //Saída de dados ↓
    printf("Vetor modificado:\n");
    for(int i = 0; i < 10; i++){
        printf("%i\n", vetor[i]);
    }

    return 0;
}

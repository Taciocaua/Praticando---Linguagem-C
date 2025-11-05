#include <stdio.h>
/*Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui.*/

int main(){

int vetor{10};
int contador_pares = 0;
for(int i = 0; i < 10; i++){
    printf("Digite o %i numero: ", i+1);
    scanf("%i", &vetor[i]);
    if(vetor[i] % 2 == 0){
        contador_pares++;
    }
}

printf("O vetor possui %i numeros pares.\n", contador_pares);
return 0;    
}
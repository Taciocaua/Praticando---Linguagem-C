//Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos ↓

#include <stdio.h>

int main(){;

//Declarando variáveis ↓

int n1,n2,n3,som,quadrado; //N = NUMERO

//Entrada de dados ↓

printf("Digite o 1º numero: ");
    scanf("%i", &n1);

printf("Digite o 2º numero: ");
    scanf("%i", &n2);

printf("Digite o 3º numero: ");
    scanf("%i", &n3);

//Processamentos ↓

som = n1 + n2 + n3;

quadrado = som * som;

//Saída de dados ↓

printf("A soma dos quadrados lidos é %d", quadrado);

return 0;
}
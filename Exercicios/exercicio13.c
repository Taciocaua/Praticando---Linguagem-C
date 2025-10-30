/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares*/
#include <stdio.h>
int main(){

int N;

printf("Digite um numero inteiro N: ");
scanf("%d", &N);

printf("Os %d primeiros numeros naturais impares sao:\n", N);
for(int i = 0; i < N; i++){
    printf("%d ", 2*i + 1);
}
printf("\n");

return 0;
}
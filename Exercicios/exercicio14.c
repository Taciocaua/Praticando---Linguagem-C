/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/

#include <stdio.h>
int main(){

int soma = 0;

for(int i = 0; i < 50; i++){
    soma += 2 * i;
}
printf("A soma dos 50 primeiros numeros pares é: %d\n", soma);
return 0;
}
//Vetores - parte 02

#include <stdio.h>
int main(){

//Vetores de inteiros
int numeros[3]; //0 a 2
numeros[0] = 5;
numeros[1] = 10;
numeros[2] = 15;
printf("Numero na posicao 0: %d\n", numeros[0]);
printf("Numero na posicao 1: %d\n", numeros[1]);
printf("Numero na posicao 2: %d\n", numeros[2]);

//Vetores e reais (float)
float valores[3]; //0 a 2
valores[0] = 5.5;
valores[1] = 10.1;
valores[2] = 15.7;
printf("Valor na posicao 0: %.2f\n", valores[0]);
printf("Valor na posicao 1: %.2f\n", valores[1]);
printf("Valor na posicao 2: %.2f\n", valores[2]);

return 0;
}
/*
Opereções matemáticas em C:

soma: +
subtração: -
multiplicação: *
divisão: / 
ao quadrado: ** 

Obs:módulo(resto da divisão): %
*/
#include <stdio.h>
int main(){

int numb1 = 2,numb2 = 2,resul;

//Soma ↓
resul = numb1 + numb2;
printf("Resultado da soma: %d + %d = %d \n", numb1, numb2, resul);
//Subtração ↓
resul = numb1 - numb2;
printf("Resultado da subtração: %d - %d = %d \n", numb1, numb2, resul);
//Multiplicação ↓
resul = numb1 * numb2;
printf("Resultado da Multiplicação: %d * %d = %d \n", numb1, numb2, resul);
//Divisão ↓
resul = numb1 / numb2;
printf("Resultado da Divisão: %d / %d = %d \n", numb1, numb2, resul);
//Ao quadrado ↓

return 0;    
}
#include <stdio.h>
//Estrutura de repetição - do while(faça...enquanto)
/*Utilizado quando você precisa de um loop(estrutura de repetição)
onde não se tenha um número fixo de elementos
mas que tenha um critério de parada e 
antes de iniciar o loop a condição é checada.*/

/* Problema ↓
Faça um progama, no qual receba e some números inteiros
até que o número de entrada seja 0
e apresente a soma no final.
*/
int main(){

//Declarando variáveis ↓
int n, soma = 0;

//Entrada de dados ↓
do{
    printf("Digite um numero: ");
    scanf("%i",&n);
    
    soma = soma + n;
}
//Processamentos de dados ↓
while(n != 0);

//Saida de dados ↓
printf("A soma é %i", soma);
return 0;
}
#include <stdio.h>
//Estrutura de repetição - while
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

//Obs: Ele é separado de 3 formas:
//inicialização, critério de parada e forma de incremento/decremento

//Entrada de dados ↓
printf("Digite um numero: ");
scanf("%i",&n);

//Processamentos de dados ↓
while(n != 0){
    soma = soma + n;
    printf("Informe um número: ");
    scanf("%i", &n);
}
//Saida de dados ↓
printf("|A soma é %i", soma);
return 0;
}
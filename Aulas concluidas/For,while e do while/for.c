#include <stdio.h>

/* Faça um progama, no qual receba e some 5 numeros 
inteiros e apresenta a soma total */

int main(){
  
//Declarando variáveis ↓
int n,soma = 0;

//Entrada de dados ↓
for(int i = 0; i < 5; i++){
    printf("Digite o numero: ");
    scanf("%i",&n);

//Processamentos de dados ↓
soma = soma + n;
}
//Saida de dados ↓
printf("A soma dos numeros é %i",soma);

return 0;
}
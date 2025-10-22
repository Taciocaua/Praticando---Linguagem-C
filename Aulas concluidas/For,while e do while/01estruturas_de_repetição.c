#include <stdio.h>

//Estruturas de repetição ↓ 
// For, While e Do While 
// para, enquanto, faça enquanto 


/* Faça um progama, no qual receba e some
numeros inteiros até que a Entrada seje 0*/

int main(){

//Declarando variáveis ↓ 
int n1,n2,soma = 0; ;

//Entrada de dados ↓ 

printf("Digite um numero: ");
    scanf("%i", &n1);

//Processamento ↓ 

for(int i = 1; i <= n1; i++){
    soma = soma + i; //soma += i;
    }printf("%i \n", soma);

//Saída de dados ↓

return 0;
}

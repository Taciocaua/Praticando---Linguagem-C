//2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles ↓ 
#include <stdio.h>
//Declarando variáveis ↓   
int main(){;

int n1,n2,n3,soma;
//Entrada de dados ↓

printf("DIgite o primeiro numero: ");
scanf("%d",&n1);
printf("Digite o segundo numero: ");
scanf("%d",&n2);
printf("Digite o terceiro numeoro: ");
scanf("%d",&n3);
//Processamento ↓   

soma = n1 + n2 + n3;
//Saída de dados ↓  

printf("A soma dos tres numeros e: %d",soma);
return 0;
} 
/*Escreva um programa que leia 10 números e mostre o menor valor e o maior valor lido*/ 
#include <stdio.h>
int main(){

int numero, maior, menor;

for(int i = 1; i <= 10; i++){
    printf("Digite o %dº numero: ", i);
    scanf("%d", &numero);

    if(i == 1){
        maior = numero;
        menor = numero;
    } else {
        if(numero > maior){
             maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }
}

printf("O maior valor lido foi: %d\n", maior);
printf("O menor valor lido foi: %d\n", menor);

return 0;
}
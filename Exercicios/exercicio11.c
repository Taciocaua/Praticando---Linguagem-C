/*Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/
#include <stdio.h>
int main(){

    int valor, soma = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores digitados é: %d\n", soma);

    return 0;
}
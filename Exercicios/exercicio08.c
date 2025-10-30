/*Escreva um programa que leia os números das camisas de 10 jogadores em destaque (digitados pelo usuário) e, 
ao final, informe qual foi o menor e 
qual foi o maior número de camisa informado.
*/

#include <stdio.h>
int main(){

    int camisa, maior, menor;

    for(int i = 1; i <= 10; i++){
        printf("Digite o numero da camisa do jogador %d: ", i);
        scanf("%d", &camisa);

        if(i == 1){
            maior = camisa;
            menor = camisa;
        } else {
            if(camisa > maior){
                maior = camisa;
            }
            if(camisa < menor){
                menor = camisa;
            }
        }
    }

    printf("O maior numero de camisa informado foi: %d\n", maior);
    printf("O menor numero de camisa informado foi: %d\n", menor);

    return 0;
}
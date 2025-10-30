/*Faça um programa utilizando o comando while que mostre uma contagem regressiva na tela 
iniciando em 10 e terminando em 0 Mostre a mensagem “FIM!” após a contagem.*/

#include <stdio.h>
int main(){

    int contagem = 10;

    while(contagem >= 0){
        printf("%d\n", contagem);
        contagem--;
    }

    printf("FIM!\n");

    return 0;
}
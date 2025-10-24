/*
Tipos alfanumericos em C:
- Characteres
- Strings

Na linguagem C, não exite o tipo de dados strings.

Obs: Em aspas duplas ("") é uma string
Em aspas simples ('') é um caractere.

Exemplo de string: "Aula de C", "12345", "@#$%¨&*()", " "

Exemplo de caractere: 'A', 'b', '1', '9', '@', '#', ' '
*/
#include <stdio.h>
int main(){
  
char opcao; 

printf("Informe uma opção: \n");
printf("a - Saldo da conta \n");
printf("b - Extrato da conta \n");
printf("c - Sair \n");
scanf("%c", &opcao);

switch(opcao){
    case 'a':
        printf("Saldo da conta é R$ 1.000,00");
        break;
    case 'b':
        printf("Extrato: \n - R$ 100,00 \n + R$ 500,00 \n - R$ 50,00");
        break;
    case 'c':
        printf("Saindo...");
        break;
    default:
        printf("Opção inválida!");
        break;
}

return 0;    
}
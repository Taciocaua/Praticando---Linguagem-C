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
  
//Declaração de string em C ↓ 
char nome[30]; 

printf("DIgite seu nome: ");
scanf("%s",nome); 

printf("Seu nome é %s", nome);

return 0;    
}
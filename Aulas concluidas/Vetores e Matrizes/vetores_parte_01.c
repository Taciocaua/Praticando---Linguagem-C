//Vetores - parte 01

#include <stdio.h>
int main(){

//Vetores e strgins são estruturas de dados que armazenam vários valores do mesmo tipo
char nome[30]; //Declaração de um vetor do tipo char com 30 posições

//Vetores e caractere são usados para armazenar strings (cadeias de caracteres)
char letras[26];

//Atribuindo valores a um vetor
letras[0] = 'A';
letras[1] = 'B';
letras[2] = 'C';

//Imprimindo valores de um vetor
printf("Letra na posicao 0: %c\n", letras[0]);
printf("Letra na posicao 1: %c\n", letras[1]);
printf("Letra na posicao 2: %c\n", letras[2]);

return 0;

}
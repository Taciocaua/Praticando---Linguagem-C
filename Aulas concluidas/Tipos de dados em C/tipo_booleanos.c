/*
Tipos de dados booleanos em C:
Booleanos(bool) = Verdadeiro/Falso ---- true/false  

Na linguagem C, não existe um tipo de dado booleano nativo
mas reconhece o valor 0 como falso
e qualquer valor diferente de 0 como verdadeiro.
*/

#include <stdio.h>
int main(){

int booleano = 0; //0 = falso | 1 = verdadeiro

switch(booleano){
    case 0:
        printf("Falso");
        break;
    default:
        printf("Verdadeiro");
        break;
}

return 0;    
}
//Leia quatro notas, calcule a média aritmética e imprima o resultado.
#include <stdio.h>

//Declarando variáveis ↓

int main(){;

float n1,n2,n3,n4,som,media;

//Entrada de dados ↓

printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
printf("Digite a quarta nota: ");
    scanf("%f", &n4);    

//Processamento ↓

som = n1 + n2 + n3 + n4;

media = som / 4;

//Saída de dados ↓

printf("A sua media foi: %.1f", media);

return 0;
}
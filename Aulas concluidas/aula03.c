#include <stdio.h>

int main(){;

//Declarando variáveis ↓

int idade; 
//Entrada de dados ↓

printf("Digite sua idade: ");
scanf("%i",&idade);

//Processamentos ↓

if(idade <= 18){
    printf("Você é jovem.");
}else if(idade >18 && idade<60){
    printf("Você é adulto."); 
}else{
    printf("Você é idoso.");
}
//Saída de dados ↓

printf("Sua idade é: %i",idade);
return 0;
}
#include <stdio.h>

int main(){
/*
Switch ↓
- Usamos o switch quando temos muitas condições para avaliar.
- If, else if e else podem ser usados, mas o switch é mais prático.
- O break é usado para sair do switch para cada estrutura.
- O default é usado quando nenhuma condição é atendida.
*/
//Declarando variáveis ↓
int valor; 

//Entrada de dados ↓
printf("Digite um valor entre 1 e 5: ");
scanf("%i", &valor);

//Processamento ↓
switch(valor){
    case 1:
        printf("Você digitou o valor 1 \n");
        break;
    case 2:
        printf("Você digitou o valor 2 \n");
        break;
    case 3:
        printf("Você digitou o valor 3 \n");
        break;
    case 4:
        printf("Você digitou o valor 4 \n");
        break;
    case 5:
        printf("Você digitou o valor 5 \n");
        break;
    default:
        printf("Valor inválido! \n");
}

//Saída de dados ↓

return 0;
}

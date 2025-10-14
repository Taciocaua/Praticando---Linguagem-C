#include <stdio.h>

//Japão teve 35% de posse de bola e 264 passes certos.
//Brasil teve 65% de posse de bola e 672 passes certos.

int main()
{
//Declarando variáveis ↓
int passe_certo_japao,passe_errado_japao,passe_certo_brasil,passe_errado_brasil,total_de_passes_japao,total_de_passes_brasil,total_de_passes_do_jogo;

//Entrada de dados ↓
printf("Total passes certos do Japão: ");
    scanf("%i", &passe_certo_japao);
    
printf("Total passes errados do Japão: ");
    scanf("%i", &passe_errado_japao);

printf("Total passes certos do Brasil: ");
    scanf("%i", &passe_certo_brasil);
    
printf("Total passes errados do Brasil: ");
    scanf("%i", &passe_errado_brasil);

//Processamento ↓   
total_de_passes_japao = passe_certo_japao + passe_errado_japao;
total_de_passes_brasil = passe_certo_brasil + passe_errado_brasil;
total_de_passes_do_jogo = total_de_passes_brasil + total_de_passes_japao;

//Saída de dados ↓
printf("\n== Estatísticas de Passes == \n");
printf("Total de passes do Japão: %i \n",total_de_passes_japao);
printf("Total de passes do Brasil: %i \n",total_de_passes_brasil);
printf("Total de passes do Jogo: %i \n",total_de_passes_do_jogo);

return 0;
}
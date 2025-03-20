#include<stdio.h>

int main()
{
            int bispo = 1; //variavel para o Bispo
            int rainha = 1; //variavel para a Rainha


         printf("Primeiro movimento: TORRE\n"); 
        for (int i = 1; i <= 5; i++){ // simular o movimento da Torre
            printf("%d - Direita.\n", i);
        }
            printf("\n"); //Quebra linha, para separar as jogadas
            printf("Proxima jogada: Movimento do BISPO.\n");        
        
             while (bispo <= 5){ //simular o movimento do Bispo
                printf("%d - Cima, direita.\n", bispo);
                bispo++;
        }
            printf("\n"); //Quebra de linha
            printf("Proxima jogada: Movimento da RAINHA\n");
            do
            {
                printf("%d - Esquerda.\n", rainha );
                rainha++;
            } while (rainha <= 8);
        
    
    return 0;
}
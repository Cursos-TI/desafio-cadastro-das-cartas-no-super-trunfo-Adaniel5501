#include<stdio.h>
#include<stdlib.h>
  

int main()
{
    int opcao, atributos;// > variaveis que controlam as escolhas de menu
    int populacaoBA, populacaoCE;// guardam a população do estado
    float areaBA, areaCE; //Armazena a area em km²
    float PibBA, pibCE;// Armazena o PIB dos estados
    int pontosTuristicosBA, pontosTuristicosCE;//Numeros de pontos turisticos dos estados
    float densidadeBA, densidadeCE; //Densidade populacional calculada como população /area


    //cadastramentro das cartas
   printf("*** Digite os dados da Bahia ***\n");
   printf("populacao: ");
   scanf("%d", &populacaoBA);
   printf("Area: ");
   scanf("%f", &areaBA);
   printf("PIB: ");
   scanf("%f", &PibBA);
   printf("Pontos turisticos: ");
   scanf("%d", &pontosTuristicosBA);
   densidadeBA = populacaoBA / areaBA; // calculo da densidade população área

   printf("\n");// Quebra de linha
    //cadastramentro das cartas
   printf("*** Digite os dados da Ceara ***\n");
   printf("populacao: ");
   scanf("%d", &populacaoCE);
   printf("Area: ");
   scanf("%f", &areaCE);
   printf("PIB: ");
   scanf("%f", &pibCE);
   printf("Pontos turisticos: ");
   scanf("%d", &pontosTuristicosCE);
   densidadeCE = populacaoCE / areaCE;

   printf("\n");
                  //exibe o menu para o usuário 
      printf("Menu principal\n");
      printf("1 - Comprar carta\n");
      printf("2 - Sair do jogo\n");
      printf("Escolher um opcao:\n");
      scanf("%d", &opcao);

      printf("\n");//Quebra de linha

         switch (opcao) // O switchi permite escolher qual ação executar com base na opção digitada
         {
         case 1 ://Comparação de estados, ** nesse bloco, é para exibir um menu para o jogador escolher uma das opções
          printf("Escolha o atributo para comparar:\n");
          printf("1 - Populacao\n");
          printf("2 - Area\n");
          printf("3 - PIB\n");
          printf("4 - Pontos turisticos\n");
          printf("5 - Densidade\n");
          scanf("%d", &atributos);

             switch (atributos) // comparar os atributos escolhidos
             {
             case 1:
               printf("Populacao: BA %d e CE %d\n", populacaoBA, populacaoCE);
             if (populacaoBA > populacaoCE) printf("Bahia venceu!\n");
             else if (populacaoBA < populacaoCE) printf("Ceara venceu!\n");
             else printf("Empate!\n");
             break;
             
             case 2:
               printf("Area: BA %.2f e CE %.2f\n", areaBA, areaCE);
             if (areaBA > areaCE) printf("Bahia venceu!\n");
             else if (areaBA < areaCE) printf("ceara venceu!\n");
             else printf("Empate!\n");
             break;

             case 3:
               printf("PIB: BA %.2f e CE %.2f\n", PibBA, pibCE);
             if (PibBA > pibCE) printf("Bahia venceu!\n");
             else if (PibBA < pibCE) printf("Ceara venceu!\n");
             else printf("Empate!\n");
             break;

             case 4:
               printf("Pontos turistico: BA %d e CE %d\n", pontosTuristicosBA, pontosTuristicosCE);
             if (pontosTuristicosBA > pontosTuristicosCE) printf("Bahia venceu!\n");
             else if (pontosTuristicosBA < pontosTuristicosCE) printf("Ceara venceu!\n");
             else printf("Empate!\n");
             break;

             case 5:
               printf("Densidade: BA %.2f e CE %.2f\n", densidadeBA, densidadeCE);
             if (densidadeBA > densidadeCE) printf("Bahia venceu!\n");
             else if(densidadeBA < densidadeCE) printf("Ceara venceu!\n");
             else printf("Empate!\n");
               break;
              default:
              printf("Opcao invalida!\n");//Se o jogador digitar um número que não está no menu, aparece um aviso.
              break;
             }   
               break;
             case 2:
                printf("Sair do jogo!"); // Se o jogador escolher sair do jogo, o programa é finalizado
             return 0;
             default:
               printf("Opcao invalida!\n"); //Se o jogador digitar um número que não está no menu, aparece um aviso.
             break;
         }
    
 return 0;
}
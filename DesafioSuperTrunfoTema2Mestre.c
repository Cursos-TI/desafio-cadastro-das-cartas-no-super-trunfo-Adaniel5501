#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main ()
{

  srand(time(0)); // Inicializa o gerador de números aleatórios
    int opcao, atributo1, atributo2;
    int populacaoBA = 14873064, populacaoCE = 9187103;
    float areaBA = 564733.0, areaCE = 148894.0;
    float pibBA = 463.9, pibCE = 195.7;
    int pontosTuristicosBA = 30, pontosTuristicosCE = 25;
    float densidadeBA = populacaoBA / areaBA, densidadeCE = populacaoCE / areaCE;
       ///Menu principal
     printf(">>>> Bem-vindo ao jogo Supertrunfo <<<<\n");
     printf("--> Menu principal <--\n");
     printf("> 1.Comprar cartas\n");
     printf("> 2.Sair do jogo\n");
     printf(">> Escolha uma opcao: ");
     scanf("%d", &opcao);

     printf("\n");//Quebra de linha

     if (opcao == 2) {
      printf("Saindo do jogo...\n");
      return(0);  // Encerra o programa
  }
            ////Escolha de abributos
     printf("Escolha o primeiro atributo para comparar\n");
     printf("\n");
        printf("> 1 - Populacao\n");
        printf("> 2 - Area\n");
        printf("> 3 - PIB\n");
        printf("> 4 - Pontos turisticos\n");
        printf("> 5 - Densidade\n");
        scanf("%d", &atributo1);

  switch (atributo1)
     {
    case 1:
      printf("Voce escolheu: 1 - populacao!\n");
      break;
   case 2:
      printf("Voce escolheu: 2 - Area!\n");
      break;
   case 3:
      printf("Voce escolheu: 3 - PIB!\n");
      break;
   case 4:
      printf("Voce escolheu: 4 - Pontos Turisticos!\n");
      break;
   case 5:
      printf("Voce escolheu: 5 - Densidade!\n");
      break;
     
     default:
     printf(">> Opcao invalida!\n");
      break;
     }

     printf("Escolha o segundo atributo a ser comparado\n");
     printf("\n");
     printf("> 1 - Populacao\n");
     printf("> 2 - Area\n");
     printf("> 3 - PIB\n");
     printf("> 4 - Pontos turisticos\n");
     printf("> 5 - Densidade\n");
     scanf("%d", &atributo2);

     
  switch (atributo2)
  {
     case 1:
       printf("Voce escolheu: 1 - populacao!\n");
       break;
     case 2:
       printf("Voce escolheu: 2 - Area!\n");
       break;
     case 3:
       printf("Voce escolheu: 3 - PIB!\n");
       break;
     case 4:
       printf("Voce escolheu: 4 - Pontos Turisticos!\n");
       break;
     case 5:
       printf("Voce escolheu: 5 - Densidade!\n");
       break;
  
     default:
       printf(">> Opcao invalida!\n");
       break;
  }
    // Verifica se o segundo atributo é igual ao primeiro
  if (atributo1 == atributo2) {
    printf("Voce escolheu o mesmo atributo! Escolha outro.\n");

      // Pede para escolher novamente
    printf("Escolha um atributo diferente do primeiro (%d):\n", atributo1);
    scanf("%d", &atributo2);
  }
       ///Comparar os Atributos Escolhidos
  int valorBA1 = 0, valorCE1 = 0;
  int valorBA2 = 0, valorCE2 = 0;

  if (atributo1 == 1)
  {// População
    valorBA1 = populacaoBA;
    valorCE1 = populacaoCE;
  } else if (atributo1 == 2)
  {// Area
    valorBA1 = areaBA;
    valorCE1 = areaCE;
  } else if (atributo1 == 3)
  { //PIB
    valorBA1 = pibBA;
    valorCE1 = pibCE;
  } else if (atributo1 == 4)
  { // Pontos turisticos
    valorBA1 = pontosTuristicosBA;
    valorCE1 = pontosTuristicosCE;
  } else if (atributo1 == 5)
  {// densidade
    valorBA1 = densidadeBA;
    valorCE1 = densidadeCE;
  }
  if (atributo2 == 1) { // População
    valorBA2 = populacaoBA;
    valorCE2 = populacaoCE;
  } else if (atributo2 == 2) { // Área
    valorBA2 = areaBA;
    valorCE2 = areaCE;
  } else if (atributo2 == 3) { // PIB
    valorBA2 = pibBA;
    valorCE2 = pibCE;
  } else if (atributo2 == 4) { // Pontos Turísticos
    valorBA2 = pontosTuristicosBA;
    valorCE2 = pontosTuristicosCE;
  } else if (atributo2 == 5) { // Densidade
    valorBA2 = densidadeBA;
    valorCE2 = densidadeCE;
  }
      // calcula a soma dos atributos
  int somaBA = valorBA1 + valorBA2;
  int somaCE = valorCE1 + valorCE2;

  if (somaBA > somaCE) {
    printf("A carta da Bahia venceu!\n");
   } else if (somaCE > somaBA) {
    printf("A carta do Ceara venceu!\n");
   } else {
    printf("Empate!\n");
     }

         printf("\n>>>>> Resultado das comparações <<<<<\n");

         printf("Estados: BAHIA X CEARA\n");

         printf ("Atributo 1 escolhidos\n");

           if (atributo1 == 1 ) printf("Populacao\n");
            else if (atributo1 == 2) printf("Area\n");
            else if (atributo1 == 3) printf("PIB\n");
            else if (atributo1 == 4) printf("pontos turisticos\n");
            else if (atributo1 == 5) printf ("densidade\n");

           printf("Atributo 2 escolhidos\n");

           if (atributo2 == 1 ) printf("Populacao\n");
             else if (atributo2 == 2) printf("Area\n");
             else if (atributo2 == 3) printf("PIB\n");
             else if (atributo2 == 4) printf("pontos turisticos\n");
             else if (atributo2 == 5) printf ("densidade\n");

             printf("\nSoma total dos atributos:\n");
             printf("Bahia: %d\n", somaBA);
             printf("Ceara: %d\n", somaCE);

               if (somaBA > somaCE) {
               printf("\n>> A Bahia venceu!\n");
               } else if (somaCE > somaBA) {
               printf("\n>> O Ceara venceu!\n");
               } else {
               printf("\n>> Empate!\n");
             }



 return 0;
}
       
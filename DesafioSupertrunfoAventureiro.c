#include <stdio.h>

 int main(void){

 char estado_1[3], estado_2[3]; // estado em formato em sigla, exemplo: BA ou CE
 char codigo_da_carta_1[4], codigo_da_carta_2[4]; // Codigo até três caracteres( letras ou numeros), exemplo: 01, 02 ou A
 char nome_da_cidade_1[50], nome_da_cidade_2[50]; // nome da cidade1: Salvador , nome da cidade2: Fortaleza
 int populacao_1, populacao_2;// Informar população via teclado
 float area_em_km2_1, area_em_km2_2 = 0.0; //Informar a Área via teclado
 float pib_1, pib_2 = 0.0; // irformar o pib via teclado
 int pontos_turisticos_1, pontos_turisticos_2; // informar pontos turistico via teclado
 // Segunda parte do desafio Aventureiro 
 float densidade_populacional_1, densidade_populacional_2  = 0.0;
 float pib_per_capita_1,pib_per_capita_2 = 0.0;

// Cadastro da carta.
 printf(" Carta 1:\n");
 
 printf(" Sigla do estado (Ex : BA): ");
 scanf(" %s", estado_1); //scanf, tipo char
 
 printf(" Codigo da carta: ");
 scanf(" %s", codigo_da_carta_1); //scanf, tipo char

 printf(" Nome da cidade: ");
 scanf(" %s", nome_da_cidade_1);// scanf, tipo char

 printf(" Populacao: ");
 scanf(" %d", &populacao_1); // scanf, tipo int
 
 printf(" Area em km²: ");
 scanf(" %f", &area_em_km2_1);// scanf, tipo float
 
 printf(" Pib: ");
 scanf(" %f", &pib_1);// scanf, tipo float
 
 printf(" Numero de pontos turisticos: ");
 scanf(" %d", &pontos_turisticos_1);// scanf, tipo int
 printf("\n"); //Quebra de linha

 printf(" Dados da carta 1:\n"); //informação do cadastro da carta.
 printf("\n"); //Quebra de linha

 //soma da densidade  populacional e pib per capita
 densidade_populacional_1 = (populacao_1 + area_em_km2_1) /2;
 pib_per_capita_1 = (populacao_1 + pib_1) /2;
 densidade_populacional_2 = (populacao_2 + area_em_km2_2) /2;
 pib_per_capita_2 = (populacao_1 + pib_2) /2;

 // Exibição dos dados da carta: Observação = (Se na hora de inserir os dados em "população", 
 //os dados informados não for do tipo inteiro, a área e o pib,
 //não são apresentados em coluna, mais sim em linha um seguido do outro.. Ex: populção: 54.879, isso gera uma quebra de sequência do código).
 printf(" Estado: %2s\n", estado_1); 
 printf(" Codigo da carta: %3s\n", codigo_da_carta_1);
 printf(" Nome da cidade: %s.\n", nome_da_cidade_1);
 printf(" Populaca: %d\n", populacao_1);
 printf(" Area em km²: %.2f\n", area_em_km2_1);
 printf(" PIB: %.2f bilhoes de reais\n", pib_1);
 printf(" Numero de pontos turistico: %d\n", pontos_turisticos_1);
 printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
 printf(" PIB per Capita: %.2f reais\n", pib_per_capita_1);
 
 printf("\n"); //Quebra de linha.
 printf("\n"); //Quebra de linha. 

// Cadastro da carta 2
 printf(" Carta 2:\n");
 
 printf("\n"); //Quebra de linha.
 
 printf(" Sigla do estado (Ex : CE): ");
 scanf(" %2s", estado_2);//scanf, tipo char
 
 printf(" Codigo da carta: ");
 scanf(" %3s", codigo_da_carta_2);//scanf, tipo char

 printf(" Nome da cidade: ");
 scanf(" %s", nome_da_cidade_2);//scanf, tipo char

 printf(" Populacao: ");
 scanf(" %d", &populacao_2);// scanf, tipo int
 
 printf(" Area em km²: ");
 scanf(" %f", &area_em_km2_2);// scanf, tipo float
 
 printf(" Pib: ");
 scanf(" %f", &pib_2);// scanf, tipo float
 
 printf(" Numero de pontos turisticos: ");
 scanf(" %d", &pontos_turisticos_2);// scanf, tipo int
 printf("\n"); //Quebra de linha.
 
 printf(" Dados da carta 2:\n");
 printf("\n");//Quebra de linha.
 
 // Exibição dos dados da carta.
 printf(" Estado: %s\n", estado_2);
 printf(" Codigo da carta: %s\n", codigo_da_carta_2);
 printf(" Nome da cidade: %s\n", nome_da_cidade_2);
 printf(" Populaca: %d\n", populacao_2);
 printf(" Area em km²: %.2f\n", area_em_km2_2);
 printf(" PIB: %.2f bilhoes de reais\n", pib_1);
 printf(" Numero de pontos turistico: %d\n", pontos_turisticos_2);
 printf(" Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
 printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);


return 0;
}
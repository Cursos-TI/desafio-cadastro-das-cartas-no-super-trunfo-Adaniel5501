#include <stdio.h>

 int main(void){

 char estado_1[3], estado_2[3]; // estado em formato em sigla, exemplo: BA ou CE
 char codigo_da_carta_1[4], codigo_da_carta_2[4]; // Codigo até três caracteres( letras ou numeros), exemplo: 01, 02 ou A
 char nome_da_cidade_1[50], nome_da_cidade_2[50]; // nome da cidade1: Salvador , nome da cidade2: Fortaleza
 int populacao_1, populacao_2;// Informar população via teclado
 float area_em_km2_1, area_em_km2_2; //Informar a Área via teclado
 float pib_1, pib_2; // irformar o pib via teclado
 int pontos_turisticos_1, pontos_turisticos_2; // informar pontos turistico via teclado
 


// Cadastro da carta.
 printf(" Carta 1:\n");
 
 printf(" Sigla do estado (Ex : BA): ");
 scanf(" %2s", estado_1); //scanf, tipo char
 
 printf(" Codigo da carta: ");
 scanf(" %3s", codigo_da_carta_1); //scanf, tipo char

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
 
 // Exibição dos dados da carta: Observação = (Se na hora de inserir os dados em "população", 
 //os dados informados não for do tipo inteiro, a área e o pib,
 //não são apresentados em coluna, mais sim em linha um seguido do outro.. Ex: populção: 54.879, isso gera uma quebra de sequência do código).
 printf(" Estado: %s.\n", estado_1); 
 printf(" Codigo da carta: %s.\n", codigo_da_carta_1);
 printf(" Nome da cidade: %s.\n", nome_da_cidade_1);
 printf(" Populaca: %d.\n", populacao_1);
 printf(" Area em km²: %.2f.\n", area_em_km2_1);
 printf(" PIB: %.2f.\n", pib_1);
 printf(" Numero de pontos turistico: %d.\n", pontos_turisticos_1);
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
 printf(" Estado: %s.\n", estado_2);
 printf(" Codigo da carta: %s.\n", codigo_da_carta_2);
 printf(" Nome da cidade: %s.\n", nome_da_cidade_2);
 printf(" Populaca: %d.\n", populacao_2);
 printf(" Area em km²: %.2f.\n", area_em_km2_2);
 printf(" PIB: %.2f.\n", pib_1);
 printf(" Numero de pontos turistico: %d.\n", pontos_turisticos_2);






































 return 0;

}

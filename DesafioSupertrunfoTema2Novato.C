#include <stdio.h>

 int main(void){

 char estado_1[3], estado_2[3]; // estado em formato em sigla, exemplo: BA ou CE
 char codigo_da_carta_1[4], codigo_da_carta_2[4]; // Codigo até três caracteres( letras ou numeros), exemplo: 01, 02 ou A
 char nome_da_cidade_1[50], nome_da_cidade_2[50]; // nome da cidade1: Salvador , nome da cidade2: Fortaleza
 
 unsigned long int populacao_1, populacao_2;// Informar população via teclado
 float area_em_km2_1, area_em_km2_2; //Informar a Área via teclado
 float pib_1, pib_2; // irformar o pib via teclado
 int pontos_turisticos_1, pontos_turisticos_2; // informar pontos turistico via teclado 
 float densidade_populacional_1, densidade_populacional_2;
 float pib_per_capita_1, pib_per_capita_2;

 



// Cadastro da carta 1.
 printf(" Carta 1:\n");
 
 printf(" Sigla do estado (Ex : BA): ");
 scanf(" %2s", estado_1); //scanf, tipo char
 
 printf(" Codigo da carta: ");
 scanf(" %3s", codigo_da_carta_1); //scanf, tipo char

 printf(" Nome da cidade: ");
 scanf(" %s", nome_da_cidade_1);// scanf, tipo char

 printf(" Populacao: ");
 scanf(" %lu", &populacao_1); // scanf, tipo int
 
 printf(" Area em km²: ");
 scanf(" %f", &area_em_km2_1);// scanf, tipo float
 
 printf(" Pib: ");
 scanf(" %f", &pib_1);// scanf, tipo float
 
 printf(" Numero de pontos turisticos: ");
 scanf(" %d", &pontos_turisticos_1);// scanf, tipo int
 
 printf("\n"); //Quebra de linha

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
 scanf(" %lu", &populacao_2);// scanf, tipo int
 
 printf(" Area em km²: ");
 scanf(" %f", &area_em_km2_2);// scanf, tipo float
 
 printf(" Pib: ");
 scanf(" %f", &pib_2);// scanf, tipo float
 
 printf(" Numero de pontos turisticos: ");
 scanf(" %d", &pontos_turisticos_2);// scanf, tipo int
printf("\n");//Quebra de linha
printf("\n");//Quebra de linha

if (populacao_1 > populacao_2){
    printf(" Populacao1 e maior que populacao2.\n");
} else {
    printf(" Populacao2 e maior que populacao1.\n");
}
if (area_em_km2_1 > area_em_km2_2){
    printf("area_em_km2_1 e maior que area_em_km2_2.\n");
} else {
    printf("area_em_km2_2 e maior que area_em_km2_1.\n");
}
if (pib_1 > pib_2){
    printf(" O pib_1 e maior que pib_2.\n");
} else {
    printf("pib_2 e maior que pib_1.\n");
}
if (pontos_turisticos_1 > pontos_turisticos_2){
    printf("O pontos_turisticos_1 e maior que pontos_turisticos_2.\n");
} else {
    printf("O pontos_turisticos_2 é maior que pontos_turisticos_1.\n");
} 
if (densidade_populacional_1 > densidade_populacional_2){
    printf("densidade_populacional_1 e maior densidade_populacional_2.\n");
} else {
    printf("densidade_populacional_2 e maior densidade_populacional_a.\n ");
}
if (pib_per_capita_1 > pib_per_capita_2){
    printf ("pib_per_capita_1 maior que pib_per_capita_2.\n");
} else {
    printf("pib_per_capita_2 maior que pib_per_capita_1.\n");
}
printf("\n");//Quebra de linha
printf("\n Comparacao de cartas\n");
printf("\n");//Quebra de linha

printf("Carta 1 - %s %s: Populacao = %lu\n", nome_da_cidade_1, estado_1, populacao_1);
printf("Carta 2 - %s %s: Populacao = %lu\n", nome_da_cidade_2, estado_2, populacao_2);

if (populacao_1 > populacao_2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
} else if (populacao_1 < populacao_2) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
} else {
    printf("ResultadO:Empate! Ambas as cidades possuem a mesma populacao.\n");
}

 
 

return 0;
}
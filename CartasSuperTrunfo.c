#include <stdio.h>

int main(){


    //Variaveis estado/cidade

    char Estado = 'A'; 
    char Codigo[10]="A01";     //Varival do tipo char [String].
    char Cidade='1';  //Varival do tipo char [String].
    int Populacao = 10;          //Variavel do tipo int, numero inteiro.
    float Area = 50;  //Variavel do tipo float, numero com ponto flutuante.              
    float Pib = 20;    //Variavel do tipo float, numero com ponto flutuante.              
    int ponto_turistico = 10;   //Variavel do tipo int, numero inteiro.






    // INFORMAÇÕES DA CARTA

printf(" \n ---------- INFORMAÇÕES DA CARTA ----------  \n"); //


printf("-----> PAIS DA CARTA: BRASIL \n");


printf("-----> ESTADO DA CARTA: %c \n", Estado); //Informando o estado da carta


printf("-----> CIDADE DA CARTA: %c \n", Cidade); // Informando a cidade da carta


printf("-----> CODIGO DA CARTA: %s \n", Codigo);



printf("----------> INSIRA AS INFORMAÇÕES SOLICITADAS: \n");  // REGISTRO DE INFORMAÇÕES DA CARTA


printf("Insira a população (Apenas numeros): \n");
scanf(" %d", &Populacao);


printf("Insira a Área (Apenas numeros): \n");
scanf(" %f", &Area);


printf("Insira o Pib (Apenas numeros): \n");
scanf(" %f", &Pib);


printf("Insira quantidade de pontos turisticos: \n");
scanf(" %d", &ponto_turistico);





printf("---------- INFORMAÇÕES DA CARTA ---------- \n"); //MOSTRANDO AS INFORMAÇÕES DA CARTA

printf("-----> ESTADO DA CARTA: %c \n", Estado);
printf("-----> CIDADE DA CARTA: %c \n", Cidade);
printf("-----> CODIGO DA CARTA: %s \n", Codigo);
printf("-----> POPULAÇÃO DA CARTA: %d \n", Populacao);
printf("-----> ÁREA DA CARTA: %.2f \n", Area);
printf("-----> PIB DA CARTA: %.2f \n", Pib);
printf("-----> PONTO TURISTICO DA CARTA: %d \n", ponto_turistico);


return 0;


}
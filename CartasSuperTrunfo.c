#include <stdio.h>

  int main () {

    
    char cidade[10],estado[10];
     float area ,pib;
     int pontotur,populacao;

printf("digite a sua cidade: ");
scanf ("%s"  , &cidade);

printf("digite o seu estado: ");
scanf("%s"   ,&estado);

printf("digite a sua população: ");
scanf("%d" , &populacao);

printf("digite a area: ");
scanf("%f"  , &area );

printf("digite o pib: ");
scanf("%f"  ,&pib);
 
printf("digite a quantidade de pontos turistiscos: ");
scanf("%d"  , &pontotur );

printf("a sua cidade: %s \n", cidade);
printf("o seu estado: %s \n",estado);
printf("população: %d \n " , populacao);
printf("area: %f  \n ",area);
printf("pontos turisticos %d \n " , pontotur );
printf("pib  %f \n  "  , pib );

return 0;
 }
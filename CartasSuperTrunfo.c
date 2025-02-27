#include <stdio.h>

  int main () { 

    
    char cidade[10],cidade2[10],estado[4],estado2[4];
    char code[] = "01";
    char codigo[] = "02";
    float area ,pib, area2, pib2;
    int pontotur , populacao , pontotur2 , populacao2;

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

printf("digite a sua cidade: ");
scanf ("%s"  ,&cidade2);

printf("digite o seu estado:");
scanf ("%s"   ,estado2);

printf("digite a sua populacao);
scanf ("%d"  , populacao2);

printf("digite a area: ";)
scanf ("%f"  , &area2);

printf("digite o pib ");
scanf ("%f"   ,&pib2);

printf("digite a quantidade de pontos turisticos: ");
scanf ("%d"   ,&pontotur2);

printf("a sua cidade: %s \n" , cidade);
printf("o seu estado: %s \n" , estado);
printf("populacao: %d  \n "  , populacao);
printf("area: %f  \n " , area);
printf("pontosturisticos: \n ", pontotur );
printf ("pib: %f \n  "  , pib );

return 0; 
}
 

#include <stdio.h>

  int main () { 

    
    char cidade[10],cidade2[10],estado[4],estado2[4];
    char code[] = "01";
    char codigo[] = "02";
    float area , area2, pib , pib2;
    int pontotur , pontotur2 , populacao , populacao2;

printf("digite a sua cidade: ");
scanf ("%s"  , cidade);

printf("digite o seu estado: ");
scanf("%s"   ,estado);

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

printf("digite a sua cidade: \nn ");
scanf ("%s"  ,cidade2);

printf("digite o seu estado: \nn");
scanf ("%s"   ,estado2);

printf("digite a sua populacao: \nn");
scanf ("%d"  , populacao2);

printf("digite a area: \nn");
scanf ("%f"  , &area2);

printf("digite o pib: \nn ");
scanf ("%f"   ,&pib2);

printf("digite a quantidade de pontos turisticos: \nn ");
scanf ("%d"   ,&pontotur2);

printf("cidade: %s \nn" , cidade);
printf(" estado: %s \nn" , estado);
printf("populacao: %d  \nn "  , populacao);
printf("area: %f  \nn " , area);
printf("pontosturisticos: \nn ", pontotur );
printf ("pib: %f \nn  "  , pib );

return 0; 
}
 

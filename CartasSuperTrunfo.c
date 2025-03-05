#include <stdio.h>

int main ()
{


    char cidade[10],cidade2[10],estado[4],estado2[4];
    char code[] = "01";
    char codigo[] = "02";
    float area, area2, pib, pib2, densidadepopulacional, densidadepopulacional2, pibpercapita, pibpercapita2;
    int pontotur, pontotur2, populacao, populacao2;

    printf("digite a sua cidade: ");
    scanf ("%s", cidade);

    printf("digite o seu estado: ");
    scanf("%s",estado);

    printf("digite a sua populacao: ");
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area );

    printf("digite o pib: ");
    scanf("%f",&pib);

    printf("digite a quantidade de pontos turistiscos: ");
    scanf("%d", &pontotur );

    densidadepopulacional = (float)(populacao / area);
    pibpercapita = (float)(pib / populacao);

    printf("a sua cidade: %s \n", cidade);
    printf("o seu estado: %s \n",estado);
    printf("população: %d \n ", populacao);
    printf("area: %f  \n ",area);
    printf("pontos turisticos %d \n ", pontotur );
    printf("pib  %f \n  ", pib );
    printf("pib percapta e : %f \n", pibpercapita);
    printf("densidade populacional e : %f \n\n", densidadepopulacional);

    printf("digite a sua cidade: ");
    scanf ("%s",cidade2);

    printf("digite o seu estado: ");
    scanf ("%s",estado2);

    printf("digite a sua populacao: ");
    scanf ("%d", &populacao2);

    printf("digite a area: ");
    scanf ("%f", &area2);

    printf("digite o pib: ");
    scanf ("%f",&pib2);

    printf("digite a quantidade de pontos turisticos: ");
    scanf ("%d",&pontotur2);

    densidadepopulacional2 = (float)(populacao2 / area2);
    pibpercapita2 = (float)(pib2 / populacao2);

    printf("cidade: %s \n", cidade2);
    printf(" estado: %s \n", estado2);
    printf("populacao: %d  \n ", populacao2);
    printf("area: %f  \n ", area2);
    printf("pontosturisticos: %d \n ", pontotur2);
    printf ("pib: %f \n  ", pib2);
    printf("pibpercapta é : %f \n", pibpercapita2);
    printf("densidade populacional é : %f \n",densidadepopulacional2);

    return 0;
}
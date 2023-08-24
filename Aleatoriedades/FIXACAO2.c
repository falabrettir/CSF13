// ano bissexto



#include<stdio.h>
int main()
{
    int ano;
    printf("Que ano deseja saber se eh ou sera bissexto?\n");
    scanf("%d", &ano);

    if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0))
    {
        printf("Ano bissexto.\n");
    }
    else
    {
        printf("Ano nao bissexto.\n");
    }
    return 0;

}

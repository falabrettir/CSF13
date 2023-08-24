#include<stdio.h>
int main ()
{
    int ano_n;
    int ano;
    printf("Qual o ano em que voce nasceu?\n");
    scanf("%d", &ano_n);
    printf("Qual o ano atual?\n");
    scanf("%d", &ano);
    printf("Voce completara %d anos ao final de 2023.\n", ano - ano_n);
    if (16 > ano - ano_n)
    {
        printf("Nao eleitor.\n");
    }
    else if (ano - ano_n < 18)
    {
        printf("Eleitor facultativo.\n");
    }
    else if (65 > ano - ano_n)
    {
        printf("Eleitor obrigatorio.\n");
    }
    else
    {
        printf("Eleitor facultativo.\n");
    }
    return 0;
}

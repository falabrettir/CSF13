// algoritmo da aprovação


#include<stdio.h>
int main()
{
    int m, e;
    int p;
    printf("Digite a frequencia a media e a nota do exame.\n");
    scanf("%d %d %d", &p, &m, &e);

    if(p >= 75 && m >= 6 || p >= 75 && e >=7)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado.\n");
    }
    return 0;
}

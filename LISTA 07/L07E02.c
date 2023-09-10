#include<stdio.h>

int main()
{
    int n, flag_c, flag_d, ant, i, atual;
    scanf("%d", &n);
    scanf("%d", &ant);
    flag_c = 1;
    flag_d = 1;
    i = 1;
    while(i<n)
    {
        scanf("%d", &atual);
        if(atual<=ant)
        {
            flag_c = 0;
        }
        else if(atual>=ant)
        {
            flag_d = 0;
        }
        i++;
    }
    if(flag_c)
    {
        printf("Crescente!\n");
    }
    else if(flag_d)
    {
        printf("Decrescente!\n");
    }
    else
    {
        printf("Nenhum dos dois.\n");
    }
    return 0;
}

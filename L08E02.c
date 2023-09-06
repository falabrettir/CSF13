#include<stdio.h>
#define M 100

int main()
{
    int acum, n, i, acessos;

    acum = 0;
    i = 0;
    scanf("%d", &n);
    while(n>0)
    {
        scanf("%d", &acessos);
        acum += acessos;
        n--;
        if(acum<=M)
        {
            i++;
        }
    }
    if(acum<M)
    {
        i = -1;
    }
    printf("%d", i);
    return 0;

}


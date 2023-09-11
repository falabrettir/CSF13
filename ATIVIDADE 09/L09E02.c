#include<stdio.h>
#define N 5
int main()
{
    int soma, cont, v, div, flag;
    v = 2;
    soma = 0;
    cont = 1;
    while(cont<=N)
    {
        flag=1;
        for(div=2;div<v;div++)
        {
            if(v%div==0)
            flag = 0;
        }
        if(flag)
        {
            cont++;
            soma += v;
        }
        v++;
    }
    printf("%d", soma);
    return 0;
}

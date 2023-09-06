#include<stdio.h>

int main()
{
    int flag, n, seq, i, ant, meio;
    flag = 0;
    scanf("%d", &n);
    scanf("%d", &ant);
    scanf("%d", &meio);
    for(i=3; i<=n; i++)
    {
        scanf("%d", &seq);
        if(meio<ant && meio<seq)
        {
            flag = 1;
        }
        ant = meio;
        meio = seq;

    }
    if(flag == 1)
    {
        printf("A montanha tem mais de um pico.\n");
    }
    else
    {
        printf("A montanha tem apenas um pico.\n");
    }
    return 0;
}

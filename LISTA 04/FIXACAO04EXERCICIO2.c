//FIXACAO 04 EXERCICIO 2



#include<stdio.h>
int main()
{
    int z;
    printf("Que numero deseja testar?\n");
    scanf("%d", &z);

    if((z%2 == 0 && z>10)|| (z%2!=0 && z < 50))
    {
        printf("Sim.\n");
    }
    else
    {
        printf("Nao.\n");
    }

    return 0;
}

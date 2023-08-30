#include<stdio.h>

int main()
{
    int i, num;
    printf("Digite um numero.\n");
    scanf("%d", &num);
    for(i=0; i<=9; i++)
    {
        printf("%d\n", ++num);
    }
    return 0;
}

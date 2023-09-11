#include<stdio.h>
int main()
{
    int n, i, j;
    char letra = 'A';
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        letra = 'A';
        for(j=n; j>i; j--)
        {
            printf("%c", letra + i);
            letra++;
        }
        printf("\n");
    }
    return 0;

}

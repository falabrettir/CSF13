#include<stdio.h>

int main()
{
    int i, num;
    i = 0;
    printf("Digite um numero.\n");
    scanf("%d", &num);
    while(i<=9)
    {
        printf("%d\n", ++num);
        i++;
    }
    return 0;
}

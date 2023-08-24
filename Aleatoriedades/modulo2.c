#include<stdio.h>
int main()
{
    int x;
    printf("Qual o numero a ser tirado o modulo?\n");
    scanf("%d", &x);
    if (x<0)
    {
        x = -x;

    }
    printf("%d", x);
}

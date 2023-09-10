#include<stdio.h>
int main()
{
    int n, fact;
    fact = 1;
    scanf("%d", &n);
    while(n>=1)
    {
        fact *=n;
        n--;
    }
    printf("%d", fact);
    return 0;
}

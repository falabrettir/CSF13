#include<stdio.h>


int main()
{
    int n, fibo, ant1, ant2, i=0;
    fibo = 0;
    ant1 = 1;
    ant2= 0;
    scanf("%d", &n);
    printf("%d %d ", 0, 1);
    for(i=2; i<=n; i++)
    {
        fibo = ant1 + ant2;
        ant2 = ant1;
        ant1 = fibo;
        printf("%d ", fibo);
    }
}

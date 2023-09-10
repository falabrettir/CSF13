#include<stdio.h>
int main()
{
    int q, r;
    q = 0;
    r = 0;
    int divisor = 5;
    int dividendo = 15;
    while(dividendo >= divisor)
    {
        dividendo -= divisor;
        q++;
        r = dividendo;
    }
    printf("%d e %d", q, r);
    return 0;


}

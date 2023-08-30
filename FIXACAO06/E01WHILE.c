#include<stdio.h>
#define N  10

int main()
{
    int i;
    i = 0;
    while(i<N)
    {
        printf("%d\n", i);
        i++;
    }
    for(i=0; i<N; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

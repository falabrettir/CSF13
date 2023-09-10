#include<stdio.h>
#define MIN_TERMO 0.2

int main()
{
    int i=1;
    int n = 1;
    int ant = 0;
    int atual = 1;
    while(i>=MIN_TERMO);
    {
        printf("%f\t%f", (float)i, ant+atual);
        i/=n;
        n++;
        ant = atual;
        atual = i;
    }
}

#include<stdio.h>
int main()
{
    int n, i, j, esp1, esp2,cont;
    char carac;
    scanf("%c %d",&carac, &n);
    cont = 1;
    for(i=1;i<=2*n+1;i+=2)
    {
        for(esp1=n; esp1>=cont; esp1--)
        {
            printf(" ");
        }
        cont++;
        for(j=0; j<i; j++)
        {
            printf("%c", carac);
        }
        printf("\n");
    }
    cont = n;
    for(i=1;i<=2*n;i+=2)
    {
        for(esp2=cont; esp2<=n; esp2++)
        {
            printf(" ");
        }
        cont--;
        for(j=2*n; j>i; j--)
        {

            printf("%c", carac);
        }
        printf("\n");
    }


    return 0;

}

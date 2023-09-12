#include<stdio.h>
int main()
{
    int n, i, j, esp, cont;
    char carac;
    scanf("%c %d",&carac, &n);
    cont = 1;
    for(i=1;i<=2*n+1;i+=2)
    {
        for(esp=n; esp>=cont; esp--)
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
        for(esp=cont; esp<=n; esp++)
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

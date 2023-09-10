#include <stdio.h>
int main ()
{
    int n, digito;
        int achou = 0;
    scanf ("%d", &n);
    scanf ("%d", &digito);

    while (n > 0 && !achou)
    {

        if (n % 10 == digito)
        achou = 1;
        n /= 10;
    }
    if (achou)
        printf ("Tem um %d!\n", digito);
    else
        printf ("Nao tem um %d!\n", digito);
    return (0);
}

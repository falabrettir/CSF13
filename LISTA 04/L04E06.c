#include<stdio.h>
#include<math.h>
int main()
{
    int num, aux;
    printf("Qual o numero da conta?\n");
    scanf("%d", &num);

    aux = num%10*100 + num%100/10*10 + num/100;

    int numf = aux + num;

    if(numf >= 1000)
    {
        numf %= 1000;
    }
    int c, d, u;

    c = numf/100;
    d = numf%100/10;
    u = numf%10;

    int dig = c + d*2 + u*3;
    printf("O digito verificador da conta eh %d.\n", dig%10);
    return 0;

}
